#include <stdio.h>

int main()
{
	int a, b, c;
	printf("number \t aquare  cube\n");
	for (a = 0; a <= 10; a++)
	{
		b = a * a;
		c = a * a*a;
		printf("%d \t %d \t %d\n", a, b, c);
	}

}
