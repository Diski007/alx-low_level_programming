#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
		putchar("%s\n", low++);

	return (0);
}
