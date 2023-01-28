#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src to @d
 * @dest: to memory area
 * @src: bytes from memory area
 * @n: function copies
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i = 0;

while (i < n)

{
dest[i] = src[i];
i++;
}

return (dest);
}
