#!/bin/sh

die() {
        echo "$*" >&2
        exit 1
}

[ -s "./env.sh" ] || die "please run ./configure first."
. ./env.sh

O=$1
if [ ! -z $O ] ; then
	BOARD=$O
fi

P=$TOPDIR/out/${BOARD}/image/
U=$TOPDIR/out/100MB

mkdir -p $U
TMP_FILE=${U}/${BOARD}-linux4.4-8k.tmp
IMG_FILE=${U}/${BOARD}-linux4.4-8k.img

(dd if=/dev/zero of=${TMP_FILE} bs=1M count=100) >/dev/null 2>&1
LOOP_DEV=`sudo losetup -f --show ${TMP_FILE}`

(if=$P/boot0_sdcard.fex	of=${TMP_FILE} bs=1k seek=8) >/dev/null 2>&1
(dd if=$P/boot_package.fex of=${TMP_FILE} bs=1k seek=16400) >/dev/null 2>&1
(dd if=$P/sunxi_mbr.fex 	of=${TMP_FILE} bs=1k seek=20480) >/dev/null 2>&1
(dd if=$P/boot-resource.fex of=${TMP_FILE} bs=1k seek=36864) >/dev/null 2>&1
(dd if=$P/env.fex 		of=${TMP_FILE} bs=1k seek=53248) >/dev/null 2>&1
#(sudo dd if=$P/boot.fex 	of=${TMP_FILE} bs=1k seek=54272) >/dev/null 2>&1

sudo sync


(dd if=${TMP_FILE} of=${IMG_FILE} bs=1024 skip=8 count=102392 status=noxfer) >/dev/null 2>&1

rm -f ${IMG_FILE}.gz
echo "gzip ${IMG_FILE}"
gzip ${IMG_FILE}
rm -f ${TMP_FILE}
