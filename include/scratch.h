#ifndef __SCRATCH__
#define __SCRATCH__

typedef struct s_string
{
    char * ptr;
    int length;

} *string;

typedef enum s_bool
{
    false,
    true
} bool;


// assembly functions

int strlen(char * string);

int print(string string);

void * alloc(int size);

// constructors
string String(const char * stringValue);

#endif
