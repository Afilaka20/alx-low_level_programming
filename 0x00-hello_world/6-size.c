#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	char c;
	long li;
	long long lli;
	float f;

	printf("size of a int: %ld\n", sizeof(i));
	printf("size of a char: %ld\n", sizeof(c));
	printf("size of a long int: %ld\n", sizeof(lli));
	printf("size of a long long int: %ld\n", sizeof(lli));
	printf("size of a float:%ld\n", sizeof(f));
	return (0);
}

