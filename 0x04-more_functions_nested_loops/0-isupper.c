#include <stdio.h>
#include "main.h"
/**
*main - checks if letter is upper case
*@c: checks if c is uppercase
*Return: 1 if uppercase and 0 if it isnt uppercase
*/

int _isupper(int c)
{
if(c >= 'A' && c <= 'Z')
{
	return (1);
}
else{
	return(0);
}
}
