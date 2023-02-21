#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/* *
 * main - entry point
 * Description: so it begins
 * Return: Always 0
 */

int main(void)
{
	int print_alphabet = 'a';
	for(print_alphabet <= 'z'; print_alphabet++;)

	{

		putchar(print_alphabet);

	 	putchar('\n');
	}

	return(0);
 }

