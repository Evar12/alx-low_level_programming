#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - print before the main function
 * Return: void
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
