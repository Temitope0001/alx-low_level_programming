#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (success)
*/
int main(void)
{
char lower_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
	if (lower_case != 'e' && lower_case != 'q')
		putchar(lower_case);
}
putchar('\n');
return (0);
}
