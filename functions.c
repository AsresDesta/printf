#include "main.h"
/**********************************PRINT CHAR********************/
/**
 * print_char - prints a char 
 * @types: list a of aruguments
 * @buffer: buffer array to handle print
 * @flags: calculates active f;ags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 *
 * Return: Number of chars printed
*/
int print_char(va_list types, char buffer[],
        int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/***************************PRINT A STRING ************************/
/**
 * print_string - prints a string 
 * @types: list a of arguments 
 * @buffer: buffer array to handle print
 * @flags: calculates active f;ags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 *
 * Return: Number of chars printed
*/


