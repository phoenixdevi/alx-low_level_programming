#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Description: does a lot with string
 *
 * Return: Always 0
*/
int main(void)
{
	int n, D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	D = n % 10;
	if
		(D > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, D);
		}
	if
		(D == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, D);
		}
	if
		(D < 6 && D != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, D);
		}
	return (0);
}
