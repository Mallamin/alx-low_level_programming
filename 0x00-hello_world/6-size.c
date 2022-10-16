#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
/*int main(void)*/
/*{*/
	/**
	 * int s;
	*float f;
	*char c;
	*long int r;
	*long long int j;
	*/

	/**
	 * printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	*printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	*printf("Size of a char : %c byte(s)\n", (int)sizeof(char));
	*printf("Size of int r: %lu byte(s)\n", (unsigned long)sizeof(long int));
	*printf("Size of int j: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	*return (0);
	*/
int main()
{
	printf("size of int : %d\n",sizeof(int));
	printf("size of signed int : %d\n",sizeof(signed int));
	printf("size of unsigned long : %d\n",sizeof(unsigned long));
	return 0;
}
/*}*/
