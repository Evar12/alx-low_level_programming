#include "main.h"

/**
 * is_prime - checks integer as candidate for prime number
 * @prime:  integer
 * @n: integer
 * Return: 1 if
 */

int is_prime_number(int n);

int print_char(int n) {
    return _putchar(n + '0');
}

int custom_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n == 0) {
        _putchar('0');
    } else {
        int len = 0;
        int temp = n;
        while (temp > 0) {
            temp /= 10;
            len++;
        }
        char num_str[len];
        for (int i = len - 1; i >= 0; i--) {
            num_str[i] = (n % 10) + '0';
            n /= 10;
        }
        for (int i = 0; i < len; i++) {
            _putchar(num_str[i]);
        }
    }
}

