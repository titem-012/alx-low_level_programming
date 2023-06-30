#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
char *pC = s;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
unsigned int x;

while (*s)
{
for (x = 0; x < sizeof(key) / sizeof(char); x++)
{
if (*s == key[x] || *s == key[x] + 32)
{
*s = 48 + value[x];
}
}
s++;
}
return (pC);
}
