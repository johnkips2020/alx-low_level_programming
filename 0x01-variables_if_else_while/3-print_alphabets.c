#include <stdio.h>

/**
*main- prints the chars in lowercase and uppercase
*followed by a line
*Return: 0 terminates the program
*/


int main(void)
{
	int ch;

	for(ch='a';ch<='z';ch++)
		putchar(ch);
	for(ch='A';ch='Z';ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
