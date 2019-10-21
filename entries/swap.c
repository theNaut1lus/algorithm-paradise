#include <stdio.h>

int main()
{
	int x, y, t;

	printf("Enter two integers to be swapped\n");
	scanf(" %d %d", &x, &y);

	printf("\tBEFORE SWAPPING\nFirst integer = %d\nSecond integer = %d\n", x, y);

	t = x;
	x = y;
	y = t;

	printf("\tAFTER SWAPPING\nFirst integer = %d\nSecond integer = %d\n", x, y);

	return 0;
}