#include <stdio.h> /* printf */
#include <string.h> /* strrchr */
ext = strrchr(filename, '.');
if (!ext) 
{
    /* no extension */
} 
else 
{
    printf("extension is %s\n", ext + 1);
}
