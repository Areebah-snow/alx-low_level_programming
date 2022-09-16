#include "main.h"
/**
*_isupper - checks if letter is upper case
*@c: checks if c is uppercase
*Return: 0 
*/

int _isupper(int c)
{
   if (c >= 'A' && c <= 'Z')
   {
   	return (1);
   }
   else
   {
	return (0);
   }
}
