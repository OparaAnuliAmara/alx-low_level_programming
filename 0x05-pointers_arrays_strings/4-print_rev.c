#include "main.h"

/**
 * print_rev - print string reversely
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
char *t = s;

if (s)
{
char *t = s;
++t;
while (s < t--)
_putchar(*t);
_putchar('\n');
}
}
