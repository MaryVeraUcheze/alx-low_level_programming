#include <stdio.h>

/**
 * beforemain - run before main
 */
void __attribute__ ((constructor)) beforemain()
{
	printf(
		"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	      );
}
