#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int s = 4;
	float f = 3.4;
	char c = 'c';

	printf("Size of an int: %lu byte(s)\n", sizeof(s));
	printf("Size of a float: %lu byte(s)\n",sizeof(f));
	printf("Size of a char : %lu byte(s)\n",sizeof(c));
	return (0);
}
