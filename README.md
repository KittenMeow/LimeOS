# LimeOS
Some of this code from from the OSDev wiki at https://wiki.osdev.org/Main_Page. You must have a gcc cross-compiler. Here are the commands:

i686-elf-gcc -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

i686-elf-gcc -T linker.ld -o myos.bin -ffreestanding -O2 -nostdlib boot.o kernel.o <other .o files> -lgcc

qemu-system-i386 -kernel myos.bin

As a note, if you use WSL1, you'll have to copy the myos.bin from WSL to another place outside of WSL if you want to use Command Prompt to run it.
