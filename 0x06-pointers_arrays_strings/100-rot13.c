#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *rot13(char *str)
{
	char *result = (char *)malloc(strlen(str) + 1);

	if (!result)
	{
		return NULL;
	char *input = str;
	char *output = result;

	while (*input)
	{
	char c = *input;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
	*output = (c - base + 13) % 26 + base;
	} 
	else 
	{
		*output = c;
	}
		input++;
		output++;
	}

		*output = '\0'; }

	return result;
}
