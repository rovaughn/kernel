# Display error message $1 and exit with code $2
function failure () {
    echo $1
    exit $2
}

# Return all sources suffixed by $1
function sources () {
    echo ../src/*$1
}

# Directories we'll use
src=../src
obj=../obj
bin=../bin
grub=../grub

# Clean the object and binary directories
rm $obj/* 2>/dev/null
rm $bin/* 2>/dev/null

# Assemble assembly files (output placed in .)
for file in `sources .s`
    do nasm -f elf $file || failure 'Assembly failed' 1
done

echo 'Assembly successful.'

# Compile all C files to object files (output placed in same directory as C file)
gcc -c `sources .c` -Wall -Wextra -Werror -nostdlib -nostartfiles -nodefaultlibs || failure 'Compilation failed' 2

echo 'Compilation successful.'

# Move object files to their proper place
mv *.o `sources .o` ../obj

# Link the files
ld -T linker.ld -o $bin/kernel.bin $obj/*.o || failure 'Link failed' 3

echo 'Linking successful.'

./make-image.sh

echo 'Done.'
