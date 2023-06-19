#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
