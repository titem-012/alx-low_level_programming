#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: pointer to an array of integres
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
int x, count;
for (x = 0; x < n / 2; x++)
{
count = a[x];
a[x] = a[n - x - 1];
a[n - x - 1] = count;
}
}
