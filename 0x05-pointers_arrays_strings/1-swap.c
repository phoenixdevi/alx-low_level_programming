/*
 * void swap_int(int *a, int *b)
 *	swaps a and b
 *
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
