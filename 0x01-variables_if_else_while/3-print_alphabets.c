#include <stdio.h>
#include <stdlib.h>
/**
* main - print big and small letter
* Return: 0 if successful
*/

int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
