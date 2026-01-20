#ifndef __SCRATCH__
#define __SCRATCH__

typedef struct s_string
{
    char * ptr;
    int length;

} *string;

typedef enum e_bool
{
    false,
    true
} bool;

typedef enum e_syscall_code
{
    SYSCALL_READ,
    SYSCALL_WRITE,
} syscall_code;

// assembly functions

int strlen(char * string);

int print(string string);

void memcpy(void * dest, void * source, void * size);

void * alloc(int size);

int dealloc(void * pointer, int size);

void * syscall(int code,...);

// constructors
string String(const char * stringValue);

#endif
