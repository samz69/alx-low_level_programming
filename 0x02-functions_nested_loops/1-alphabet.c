#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - utilizes on the _putchar function to print alphabet a - z
 *
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
