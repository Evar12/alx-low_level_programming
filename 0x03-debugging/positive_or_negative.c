#include "main.h"

/* main - positive negativr
 *
 * Description: positvie negative. 
 * Return: Always 0 successful
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
