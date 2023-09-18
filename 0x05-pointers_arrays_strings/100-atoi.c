#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: String
 * Return: Always 0
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	// default to positive

	// Skip leading whitespace characters
	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}
	
	// Handle optional sign
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	// Convert the digits to an integer
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';
	return result * sign;
	// Check for integer overflow
	 if (result > (2147483647 - digit) / 10) 
	{
	// Overflow, return INT_MAX for positive and INT_MIN for negative
		return (sign == 1) ? 2147483647 : -2147483648;
	}
		result = result * 10 + digit;
		s++;
	}


int main() {
	    char str[] = "  -12345";
	      int num = _atoi(str);
	printf("The converted integer is: %d\n", num);
		 
	return (0);
}
