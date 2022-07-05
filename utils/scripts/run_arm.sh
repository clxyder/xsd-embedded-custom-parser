#!/bin/bash

utils_dir=$(dirname $(dirname $0))

# from http://downloads.raspberrypi.org/raspbian/images
rpi_img="${utils_dir}/rpi_imgs/2019-09-26-raspbian-buster.img"
mnt_raspbian="/mnt/raspbian"

function run_arm() {
  # from https://github.com/dhruvvyas90/qemu-rpi-kernel
  qemu-system-arm \
    -M versatilepb \
    -cpu arm1176 \
    -m 256 \
    -nographic \
    -hda "./${rpi_img}" \
    -net user,hostfwd=tcp::5022-:22 \
    -dtb ./${utils_dir}/qemu-rpi-kernel/versatile-pb-buster.dtb \
    -semihosting-config enable=on \
    -kernel ./${utils_dir}/qemu-rpi-kernel/kernel-qemu-4.19.50-buster \
    -append 'root=/dev/sda2 panic=1' \
    -no-reboot
    ./cmake-build-debug-arm-linux-elf/bin/driver
}

function transfer_files() {
  # from https://www.robopenguins.com/cross-compiling/
  sudo mkdir -p ${mnt_raspbian}
  sudo mount -v -o offset=272629760 -t ext4 "./${rpi_img}" "${mnt_raspbian}"
  cp ./cmake-build-debug-arm-linux-elf/bin/driver ${mnt_raspbian}/home/pi
  cp ./cmake-build-debug-arm-linux-elf/bin/xsdbin ${mnt_raspbian}/home/pi
  cp ./library.xml ${mnt_raspbian}/home/pi
  cp ./library.xsd ${mnt_raspbian}/home/pi
  sudo umount ${mnt_raspbian}
}

transfer_files

run_arm
