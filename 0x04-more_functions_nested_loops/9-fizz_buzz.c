#include <stdio.h>

/**
  *main - entry point
  *Return: always 0
  */

/*prototype */
void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
  * fizz_buzz - prints number, fizz, buzz based on some conditions
  *Return: it returns nothing just prints out the specified
  */

void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i = i + 1;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			i = i + 1;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			i = i + 1;
		}
		else
		{
			printf("%d ", i);
			i = i + 1;
		}
	}
	printf("\n");
}
