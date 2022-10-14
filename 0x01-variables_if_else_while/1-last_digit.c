#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a random number if it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
		printf("%s %d and is greater than 5\n", str, n, L);
	else if (L == 0)
		printf("%s %d is %d and is 0\n", str, n, L);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

	return (0);
}
