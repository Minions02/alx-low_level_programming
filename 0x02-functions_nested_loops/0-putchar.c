#include "holberton.h"

/**
 * main - function to print
 *
 * Return: 0
 */
int main(void)
{
	char main[9] = {'m', 'a', 'i', 'n'};
	unsigned int c;

	for (c = 0; c < sizeof(holberton); c++)
	{
		_putchar(holberton[c]);
	}
_putchar('\n');
return (0);
}
