#include "../include/scratch.h"

string String(const char * stringValue)
{
    int stringSize = strlen(stringValue);
    string newString = (string)malloc(sizeof(struct s_string));
    newString->ptr = malloc(stringSize);
    
    while((*(stringValue) != 0))
    {
        *(newString->ptr++) = *(stringValue++);
    }

    *(newString->ptr) = 0;
    newString->ptr = newString->ptr - stringSize;
    newString->length = stringSize;

    return newString;
}