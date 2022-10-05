#include <stdio.h>
int main()
{
	int a, b, c;
	for (a = 0; a <= 4; a++)
	{
		for (b = 3; b >= a; b--)
		{
			printf(" ");
		}
		for (c = 0; c < 2 * a + 1; c++)
		{

			printf("*");
		}
		printf("\n");
	}
}
