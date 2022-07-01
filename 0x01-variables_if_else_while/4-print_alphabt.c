#include <stdio.h>

/**
*main- prints alphabet letters
*except q and e follow new line 
*Return: 0 terminates
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
