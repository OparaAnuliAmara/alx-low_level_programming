#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
**/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(l));
	printf("Size of long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of float: %lu byte(s)\n", sizeof(d));
	return (0);
}
