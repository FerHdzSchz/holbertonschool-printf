#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

/*Add print function*/
int _printf(const char *format, ...);
/*All numeric conversions are handled by the functions*/
/*Decimal, Binary, Octal, Hexadecimal*/
void pos_num_converter(int number, int base, char *tmp_buff);
void num_converter(int number, int base, char *tmp_buff);
/*Funcion para ROT13*/
char *rot13(char *str);

