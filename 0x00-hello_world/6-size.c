#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	printf("size of a char: %ld byte(S)\n", sizeof(char));
	printf("size of an int: %ld byte(S)\n", sizeof(int));
	printf("size of a long int: %ld byte(S)\n", sizeof(long));
	printf("size of a long long int: %ld byte(S)\n", sizeof(long long));
	printf("size of a float: %ld byte(S)\n", sizeof(float));
	return (0);
}

