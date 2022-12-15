#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int time = 1;
	int n;
	int t1;
	int t2;

	do

	{
		for (n = 0; n <= 14; n++)

		{
			t1 = n / 10;
			t2 = n % 10;

			if (t1 > 0)

			{
				_putchar('0' + t1);
			}
			_putchar('0' + t2);
		}
		_putchar('\n');
		time++;
	} while (time <= 10);
}
