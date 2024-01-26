#include "main.h"
/**
  * count_int_digit - calc digits in an int
  * @_digit: integer variable
  * Return: Always zero
  */
int count_int_digit(int _digit)
{
	int i = 0;

	while (_digit != 0)
	{
		_digit /= 10;
		i++;
	}
	return (i);
}
