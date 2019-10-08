#include <stdio.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i <= n)
		{
			for (int j = 1; j < i; j++)
				printf(" ");
			for (int j = 0; j < 2*(n-i)+1; j++)
				printf("*");
		}
		else
		{
			for (int j = 1; j < 2*n - i; j++)
				printf(" ");
			for (int j = 0; j < 2 * (i - n) + 1; j++)
				printf("*");
		}

		printf("\n");
	}
	return 0;
}