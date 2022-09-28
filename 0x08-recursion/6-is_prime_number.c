#include "main.h"
/**
 * is_prime_number - function for a prime number
 * @n: integer
 * Return: 1 otherwise 0
 */
int is_prime_number(int n)
{
if (n % 2 == 0)
{
return (0);
}
else if (n < 0)
{
return (0);
}
else if (n == 1)
{
return (0);
}
else if (n % 3 == 0)
{
return (0);
}
else if (n % 5 == 0)
{
return (0);
}
else if (n % 2 == 1)
{
return (1);
}
else if (n % 3 == 1)
{
return (1);
}
else if (n % 5 == 1)
{
return (1);
}
return (is_prime_number(n));
}
