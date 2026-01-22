# cleaning
if [ -d build ]; then
    rm -Rf build
fi

mkdir build

# sources list
sources=($(ls src/asm))

# objects list
objects=()

# assembling sources
for src in "${sources[@]}"; do
    obj="build/${src%.asm}.o"
    nasm -f elf64 "src/asm/$src" -o "$obj"
    echo "$src"
    objects+=("$obj")
done

# compiling c functions
gcc -c src/scratch.c -o build/scratchc.o -w
echo scratch.c

ld -r -o build/scratch.o build/scratchc.o "${objects[*]}"
