#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int count_int_digit(int _digit);
void int_2_str(char *buff, int i);
void doub_2_str(char *b, double n, int deci);
void _strwrite(const char *s);
int _printf(const char *format, ...);
#endif 
