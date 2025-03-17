#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Applies a function to a given name.
 * @name: Pointer to a string containing the name to be processed.
 * @f: Pointer to a function that takes a char * argument and returns nothing.
 *
 * Description: This function takes a name and a pointer to a function.
 * It calls the function 'f' and passes 'name' as its argument.
 * The function pointed to by 'f' is responsible for processing or printing
 * the name in a specific way.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
