#include "main.h"

/**
 *   print_alphabet - utilizes on the putchar function
 *   to print the alphabet a - z
 *   main - Entry point
 *   Return: Always 0
*/

void print_alphabet(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)

		putchar(ch);

	putchar('\n');

}

