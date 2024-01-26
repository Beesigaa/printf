#include "main.h"
/**
  *doub_2_str - convert double to string
  *@b: Character string
  *@n: Double
  *@deci: Integer
  *Return - nothing
  */
void doub_2_str(char *b, double n, int deci)
{
	int i = (int) n;
	double frac = n - i;

	int_2_str(b, i);

	while (*b != '\0')
	{
		b++;
	}

	*b = '.';

	for (int x = 0; x < deci; x++)
	{
		frac *= 10;
		int temp = (int) frac;
		*b++ = '0' + temp;
		frac -= temp;
	}

	*b = '\0';
}
