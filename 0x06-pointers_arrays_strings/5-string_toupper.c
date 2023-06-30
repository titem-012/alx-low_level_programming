#include "main.h"
#include <ctype.h>

/**
 * *string_toupper -  function that changes all lowercase
 *  to uppercase.
 * @str: string input
 * Return: string
 *
 */

char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr)
{
*ptr = toupper(*ptr);
ptr++;
}
return (str);
}
