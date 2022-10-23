#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) before(void);
/**
 * before - function that prints a string before
 *				  the main function is executed.
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
