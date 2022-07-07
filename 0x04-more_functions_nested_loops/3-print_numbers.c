#include "main.h"

/**
  *print numbers - prints numbers from 0 - 9
  *
  *Return: always sucess 0
  */

void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
