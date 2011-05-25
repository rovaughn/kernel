bin=../bin
isofiles=$bin/isofiles

mkdir -p $isofiles/boot/grub
cp /usr/lib/grub/i386-pc/stage2_eltorito $isofiles/boot/grub
cp menu.lst $isofiles/boot/grub
cp $bin/kernel.bin $isofiles/boot
genisoimage -R -b boot/grub/stage2_eltorito -quiet -no-emul-boot \
            -boot-load-size 4 -boot-info-table \
            -o $bin/os.iso $isofiles
