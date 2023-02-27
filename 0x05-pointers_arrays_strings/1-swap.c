/*
 * void swap_int(int *a, int *b)
 *
 * swap_int - swaps a and b
 *
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
