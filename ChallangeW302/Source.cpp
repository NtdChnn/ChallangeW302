#include<stdio.h>
int main()
{
	int i, j, k;
	scanf_s("%d", &i);
	if (i <= 0)
		printf("Error");
	else for (j = 1; j <= i; j++)
	{
		for (k = j; k < i; k++)
		{
			printf(" ");
		}
		printf("* ");
		for (k = 1; k < j - 1; k++)
		{
			printf("  ");
		}
		if (j != 1)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (j = 1; j < i; j++)
	{
		for (k = 1; k <= j; k++)
		{
			printf(" ");
		}
		printf("* ");
		for (k = j; k < i - 2; k++)
		{
			printf("  ");
		}
		if (j != i - 1)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}