#include <stdio.h>
#include <stdlib.h>

/**
* main - prints only small letters
* Return: 0 if successful
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
