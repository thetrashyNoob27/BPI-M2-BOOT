#ifndef __HDMI_CORE_H__
#define __HDMI_CORE_H__

#include "drv_hdmi_i.h"
#include "hdmi_edid.h"
#include "hdmi_bsp.h"

#define HDMI1440_480I		6
#define HDMI1440_576I		21
#define HDMI480P			2
#define HDMI576P			17
#define HDMI720P_50			19
#define HDMI720P_60 		4
#define HDMI1080I_50		20
#define HDMI1080I_60		5
#define HDMI1080P_50		31
#define HDMI1080P_60 		16
#define HDMI1080P_24 		32
#define HDMI1080P_25 		33
#define HDMI1080P_30 		34
#define HDMI1080P_24_3D_FP  (HDMI1080P_24 +0x80)
#define HDMI720P_50_3D_FP   (HDMI720P_50  +0x80)
#define HDMI720P_60_3D_FP   (HDMI720P_60  +0x80)
#define HDMI3840_2160P_30   (1+0x100)
#define HDMI3840_2160P_25   (2+0x100)
#define HDMI3840_2160P_24   (3+0x100)
#define HDMI1024_600		(5+0x100)
#define HDMI1280_800        (6+0x100)
#define HDMI800_480         (7+0x100)
#define HDMI400_1280        (8+0x100)

#define HDMI_EDID_LEN 1024

#define HDMI_State_Idle 			 0x00
#define HDMI_State_Wait_Hpd			 0x02
#define HDMI_State_Rx_Sense			 0x03
#define HDMI_State_EDID_Parse		 0x04
#define HDMI_State_HPD_Done			 0x05

/*
typedef struct video_timing
{
    s32 VIC;
    s32 PCLK;
    s32 AVI_PR;
    s32 INPUTX;
    s32 INPUTY;
    s32 HT;
    s32 HBP;
    s32 HFP;
    s32 HPSW;
    s32 VT;
    s32 VBP;
    s32 VFP;
    s32 VPSW;
}HDMI_VIDE_INFO;
*/

typedef struct audio_timing
{
    s32   CTS;
    s32   ACR_N;
    s32   CH_STATUS0;
    s32   CH_STATUS1;
}HDMI_AUDIO_INFO;

extern s32 hdmi_core_initial(bool sw_only);
extern void hdmi_core_exit(void);
extern void hdmi_core_set_base_addr(uintptr_t base_addr);
extern s32 hdmi_core_loop(void);
extern s32 hdmi_core_hpd_check(void);
extern s32 hdmi_core_get_video_info(s32 vic);
extern s32 hdmi_core_get_audio_info(s32 sample_rate);
extern s32 hdmi_core_set_video_mode(u32 vic);
extern u32 hdmi_core_get_video_mode(void);
extern s32 hdmi_core_mode_support(u32 mode);
extern s32 hdmi_core_dvi_support(void);
#if defined(CONFIG_SND_SUNXI_SOC_HDMIAUDIO)
extern s32 hdmi_core_audio_config(hdmi_audio_t *audio_param);
#endif
extern s32 hdmi_core_set_video_enable(bool enable);
extern bool hdmi_core_get_video_enable(void);
extern s32 hdmi_core_set_audio_enable(bool enable);
extern bool hdmi_core_get_audio_enable(void);
extern s32 hdmi_core_set_hdcp_enable(u32 mode);
extern u32 hdmi_core_get_hdcp_enable(void);
extern s32 hdmi_core_set_cts_enable(u32 enable);
extern u32 hdmi_core_get_cts_enable(void);
extern s32 hdmi_core_enter_lp(void);
extern s32 hdmi_core_exit_lp(void);
extern u32 hdmi_core_get_csc_type(void);
extern s32 hdmi_core_update_detect_time(u32 time_val);
extern s32 hdmi_core_cec_enable(bool enable);
extern int hdmi_core_cec_get_simple_msg(unsigned char *msg);

s32 hdmi_core_get_list_num(void);

extern u32 hdmi_print;
extern u32 hdmi_hpd_mask;//0x10: force unplug; 0x11: force plug
extern u32 is_exp;
//extern disp_video_timing video_timing[];

extern void hdmi_delay_ms(unsigned long ms);
extern void hdmi_delay_us(unsigned long us);
extern unsigned int hdmi_get_soc_version(void);
extern unsigned int hdmi_clk_get_div(void);

#endif

