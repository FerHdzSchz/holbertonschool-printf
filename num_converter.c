#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include "main.h"
void pos_num_converter(int number, int base, char *tmp_buff)
{
	int f_digit;
	char buff[65];

	if(number == 0)
	{
		*tmp_buff = '0';
		*tmp_buff = 0;
		return;
	}


	for (int i = 0; i < 65; i++)
	{
		buff[i] = 0;
	}

	int position = 0;
	while (number)
	{
		f_digit = number % base;
		if (f_digit >= 10)
		{
			buff[position++] = 'a' + (f_digit - 10);
		} else
		{
			buff[position++] = '0' + f_digit;
		}
		number /= base;
	}


	for(int i = position-1; i != 0; i--)
	{
		*tmp_buff++ = buff[i];
	}
	*tmp_buff = buff[0];
	*tmp_buff = 0;
}

void num_converter(int number, int base, char *tmp_buff)
{
	if (number < 0)
	{
		*tmp_buff++ = '-';
		number = -number;
	}
	pos_num_converter(number, base, tmp_buff);
}