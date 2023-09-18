#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: String
 * Return: Always 0
 */

/*int _atoi(char *s) 
{
	char num[50];
	int  i, len;
	int result = 0;

	printf("Enter a number: ");
	gets(num);
	len = strlen(num);

	for(i=0; i<len; i++)
	{
		result = result * 10 + ( num[i] - '0' );
	}

	printf("%d", result);

}
*/
int _atoi(char *s)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}

