#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: input,string
 * Return: length of string
 *
 */
int _strlen(char *s)
{
int length = 0;

while (*s)
{
length++;
s++;
}

return (length);
}
