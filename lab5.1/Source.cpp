#include<stdio.h>
int main()
{
	int n,a=1;
	scanf_s("%d", &n);
	int b = n;
	for (int y = 1; y <= n; y++)
	{
		for (int b = 1; b <= n - y; b++)
		{
			printf(" ");
		}
		for (int x = 1; x <= (2 * y) - 1; x++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;
}