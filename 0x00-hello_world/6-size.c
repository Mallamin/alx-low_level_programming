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

	printf(sizeof(s));
	printf(sizeof(f));
	printf(sizeof(c));
        return (0);
}
