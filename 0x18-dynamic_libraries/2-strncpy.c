#include "main.h"
/**
 *_strncpy - c function that copies a string, including the
 * terminating null bytes using at most an inputted number of bytes.
 * if the length of the source sting is less than the maximum byte number.
 * the reminder of the destination string is filled with null bytes.
 * works identically to the standard library function 'strncpy'.
 * @dest:buffet storing the string copy
 * @src: the source string
 * @n:maximum number of bytes copied
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
