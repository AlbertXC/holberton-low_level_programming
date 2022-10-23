#include "lists.h"

/**
 * before_main - function that prints a string before 
 *				  the main function is executed.
 */

void before_main(void) __attribute__ ((constructor));
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
