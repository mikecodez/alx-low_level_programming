#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: nnothing
 */
void swap_int(int *a, int *b)
{
/*function that swaps the values of two integers.*/
int s = *a;
*a = *b;
*b = s;
}
