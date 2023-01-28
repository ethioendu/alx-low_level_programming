#include "main.h"
/**
 * malloc_checked - cause normal process terminattion with a status value of 98
 *
 * @b: allocated meomory
 *
 * Return: a pointer to theallocated memory
 */
void *malloc_checked(unsigned int b)
{
void *i;
i = malloc(b);
if (i == NULL)
exit(98);
return (i);
}
