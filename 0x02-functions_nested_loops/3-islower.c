#include "main.h"
/**
 * _islower - Check main
 * @c: An input checker
 * Description: function that checks for lowercase character
 * Return: 1  if c is lowercase, or 0 if uppercase
 */
int _islower(int c)
{
	char h;
	int lowercase = 0;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h == c)
			lowercase = 1;
	}
	return (lowercase);
}
