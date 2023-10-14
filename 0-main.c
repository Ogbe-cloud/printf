#include <stdio.h>
#include "main.h"
/**
 * main - It print out result
 *
 * Return: always (0)
 */
int main(void)
{
	int num = 42;

	char str[] = "Hello, World!";

	int ct;

	ct = _printf("Character:%c, String:%s, Percentage:30%%\n", 'B', str);

	printf("Total characters printed: %d\n", ct);
	return (0);
}
