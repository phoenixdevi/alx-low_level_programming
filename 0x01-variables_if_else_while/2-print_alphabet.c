#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints small case letters
 *
 * Return: Always 0
*/

int main(void)

{
	char low_case_alpha;

	low_case_alpha = 'a'; 
		
		while(low_case_alpha <= 'z')
		{
			putchar(low_case_alpha);
			++low_case_alpha;

				
		}
	putchar('\n');	
	return(0);
}
