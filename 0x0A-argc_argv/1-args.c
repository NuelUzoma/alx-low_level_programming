#include <stdio.h>
#ifdef UNUSED
#elif defined(__GNUC__)
# define(UNUSED(x) UNUSED_ ## x __attribute__((unused)))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x


void dcc_mon_siginfo_handler(int UNUSED(whatsig));

#endif
/**
 * main - a program that prints the number
 * of arguments passed to it
 * @argc: first argument
 * @argv: second argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc);
	return (0);
}

