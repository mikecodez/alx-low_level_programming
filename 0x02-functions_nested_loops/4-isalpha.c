#include "main.h"

/**
 * _isalpha - check the code.
 *@c: int parameter for _isalpha function
 * Return: 1 if c is a letter, lowercase or uppercase else 0.
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
