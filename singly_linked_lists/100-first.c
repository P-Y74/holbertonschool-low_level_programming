#include <stdio.h>
#include "lists.h"

/**
 * first_print - Function that prints a message before main executes
 *
 * Description: This function is automatically executed before main()
 * due to the `constructor` attribute. It prints a predefined message.
 */
void first_print(void) __attribute__((constructor));

/**
 * first_print - Prints a message before the execution of main
 */
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
