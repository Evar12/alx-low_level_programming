#includ "main.h"

/**
 *puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */

void puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (1 % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
