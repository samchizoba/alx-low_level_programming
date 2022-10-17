#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char aph;

	for (aph = 'a'; aph <= 'z'; aph++)
	{
		putchar(aph);
	}
	for (aph = 'A'; aph <= 'Z'; aph++)
	{
		putchar(aph);
	}
	putchar('\n');
	return (0);
}
