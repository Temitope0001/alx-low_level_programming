#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/
int main(void)
{
	int n, lastdigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigi = n % 10;
	if (lastdigi > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigi);
	else if (lastdigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigi);
	}
	else if (lastdigi < 6 && lastdigi != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigi);
	return (0);
}
