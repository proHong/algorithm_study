#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	int temp[1000];

	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		int total = 0;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &temp[j]);
			total += temp[j];
		}
		int aver = total / n;
		int num = 0;
		for (int j = 0; j < n; j++)
		{
			if (temp[j] > aver)
				num++;
		}

		float result = 100*((float)num / n);
		printf("%.3lf%%\n", result);
	}

	return 0;
}