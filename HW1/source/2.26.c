#include <stdio.h>

int main()
{
	int a, b;
	printf("enter two integers:");
	scanf("%d %d", &a, &b);
	if (a%b == 0)
	{
		printf("%d is a multiple of the %d \n", a, b);
	}
	else
	{
		printf("%d is not a multiple of the %d \n", a, b);
	}

	return 0;
}
