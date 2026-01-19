<p align="center">
    <img src="./scratch.png" width="300">
</p>

# scratch
---

## Overview

**scratch** is a low-level foundation library for C projects, implemented directly in **x86_64 assembly** and targeting the **System V ABI**.

Its purpose is simple:  
provide a **clean, minimal, and efficient base layer** that allows C projects to start at a **higher abstraction level** than what C natively offers — **without depending on the usual C standard libraries**.

This is a library for developers who:
- care about **control** and **predictability**
- want **zero hidden cost**
- dislike bloated abstractions
- still want to move **fast**

In short:  
**a library for people who don’t like libraries.**

---

## Philosophy

- **Assembly-first**  
  Implemented in hand-written x86_64 assembly for full control over calling conventions, memory, and performance.

- **System V ABI compliant**  
  Fully compatible with modern UNIX-like systems (Linux, BSD, macOS where applicable).

- **No libc dependency (or minimal by design)**  
  scratch avoids relying on the C standard libraries whenever possible.

- **Practical abstractions, not frameworks**  
  Only primitives that make C *less painful*, not more abstract.

---

## Goals

- Serve as a **bootstrap layer** for C projects
- Reduce boilerplate and repeated low-level code
- Provide **better primitives** than raw C
- Remain small, auditable, and hackable

---

## Non-Goals

- Replacing libc entirely
- Being portable beyond x86_64 System V
- Competing with large general-purpose libraries

---

## What scratch Provides

Depending on build configuration and modules, scratch may include:

- Basic memory primitives
- String and buffer utilities
- Syscall wrappers
- Error handling helpers
- Lightweight data structures

All exposed through **clean C headers**, with implementations in assembly.

---

## Project Structure

```
scratch/
├── include/ # Public C headers
├── src/asm # x86_64 assembly sources
├── build/ # Build artifacts
└── README.md
```

---

## Usage

scratch is designed to be linked directly into your C projects.

### Typical workflow:

1. Build scratch as a static library
2. Include the provided headers
3. Link against it

Example (simplified):

```c
#include "include/scratch.h"

int main(int argc, char ** argv)
{
    string testString = String("Hello World\n");
    print(testString);
    return 0;
}
```

## Build

```
./make.sh
gcc -c your_program.c -o build/your_program.o
gcc build/your_program.o build/scratch.o -o build/your_program
```

## Requirements
* x86_64 architecture
* System V ABI
* nasm
* gcc

## Status

* Experimental
* Actively evolving
* APIs may change
* Documentation grows with usage

