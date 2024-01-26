#include "main.h"
/**
  *_strwrite - string to standard output
  *@s: character string
  *Return - nothing
  */
void _strwrite(const char *s)
{
	write(1, s, strlen(s));
}
