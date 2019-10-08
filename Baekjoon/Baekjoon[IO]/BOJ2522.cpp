#include <stdio.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i < n)
		{
			for (int j = 0; j < (n - i); j++)
				printf(" ");
			for (int j = 0; j < i; j++)
				printf("*");
		}
		else
		{
			for (int j = 0; j < (i - n); j++)
				printf(" ");
			for (int j = 0; j < 2 * n - i; j++)
				printf("*");
		}

		printf("\n");
	}
	return 0;
}