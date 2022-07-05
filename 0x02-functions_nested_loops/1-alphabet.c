#include "main.h"

/**
  *main - Print lowercase alphabets
  *
  *Return - always sucess
*/

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
