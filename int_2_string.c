#include "main.h"
/**
  *int_2_str - convert int to str
  *@buff: char pointer
  *@i: integer
  *Return - return nothing
  */
void int_2_str(char *buff, int i)
{
	if (i == 0)
	{
		buff[0] = '0';
		buff[1] = '\0';
	}
	
	int check_sign = (i < 0) ? -1 : 1;
	int index = 0;

	while (i != 0)
	{
		buff[index++] = '0' + check_sign * (i % 10);
		i /= 10;
	}
	
	if (check_sign == -1)
	{
		buff[index++] = '-';
	}
	buff[index] = '\0';

	int first = 0;
	int last = index - 1;

	while (first < last)
	{
		char c = buff[first];
		buff[first] = buff[last];
		buff[first] = buff[last];
		buff[last] = c;
		first++;
		last--;
	}
}
