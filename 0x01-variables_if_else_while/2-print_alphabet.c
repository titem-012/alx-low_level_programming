#include <stdio.h>
/**
 * main - entry point
 * Description: print all alfphabet letters
 * Return:return 0 (success)
 */
int main(void)
{
char x = 'a';
while (x <= 'z')

{
putchar(x);
x++;
}
putchar('\n');

return (0);
}
