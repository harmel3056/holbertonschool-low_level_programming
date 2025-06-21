#include "main.h"

/**
 * _abs - checks for negative numbers
 * and returns their absolute value
 *
 * @r: character to check
 * Return: if r < 0 return positive value, else return r
 */

int _abs(int r)
{

		if (r < 0)
		{
			return (-r);
		}
		else
		{
			return (r);
		}
}
