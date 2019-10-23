#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);

	int num[10001] = { 0, };
	for (int i = 0; i < n; i++)
	{
		int temp;
		scanf("%d", &temp);
		num[temp]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (num[i] > 0)
		{
			for (int j = 0; j < num[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}

	return 0;
}