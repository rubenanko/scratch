#include "../include/scratch.h"

string String(const char * stringValue)
{
    int stringSize = strlen(stringValue);
    string newString = (string)alloc(sizeof(struct s_string));
    newString->ptr = alloc(stringSize);
    
    while((*(stringValue) != 0))
    {
        *(newString->ptr++) = *(stringValue++);
    }

    *(newString->ptr) = 0;
    newString->ptr = newString->ptr - stringSize;
    newString->length = stringSize;

    return newString;
}

bool dString(string str)
{
    if(dealloc(str->ptr,str->length) == 0)
        if(dealloc(str,sizeof(struct s_string)) == 0)
            return true;

    return false;
}