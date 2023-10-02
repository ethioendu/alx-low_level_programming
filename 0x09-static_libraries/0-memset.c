#include "main.h"
/**
 * _memset - function fill the first on bytes of the memory
 * @n: bytes of the memory
 * @b: memory are pointer
 * Return : a pointer
 */
char *_memset(char *s, char b, unsigned int  n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return(s);
}
