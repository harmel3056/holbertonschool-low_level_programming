#include <stdio.h>

/**
 * main - prints 1 - 100 with
 * "Fizz" for multiples of 3 and
 * "Buzz" for multiples of 5
 * Return: void
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
		
		x = x + 1;
	}
	
	printf("\n");
	return (0);
}
