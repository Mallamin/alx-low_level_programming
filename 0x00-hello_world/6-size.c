#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int s;
	float f;
	char c;
	long int r;
	long long int j;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int r: %lu byte(s)\n", (unsigned long)sizeof(r));
	printf("Size of int j: %lu byte(s)\n", (unsigned long)sizeof(j));			
	return (0);
}
