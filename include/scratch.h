#ifndef __SCRATCH__
#define __SCRATCH__

#include <stdlib.h>

typedef struct s_string
{
    char * ptr;
    int length;

} *string;

// assembly functions

int strlen(char * string);

int print(string string);


// constructors
string String(const char * stringValue);

#endif
