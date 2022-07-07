#include "main.h"
/**
 * main - print num from 0 - 9
 * Return: 0
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}	
