#include <stdio.h>
#include <string.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
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
void trim(char *s)
{
	int i = strlen(s) -1;
	while (i > 0)
		if (s[i] == ' ' || s[i] == '\n' ||
		    s[i] == '\t') i--;
	else break;
}
s[i + 1] = '\0';
