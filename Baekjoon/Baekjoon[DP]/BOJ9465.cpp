#include <stdio.h>
#include <algorithm>
using namespace std;

int temp[2][100001];
long long result[3][100001];


long long dp(int n)
{
	result[0][0] = 0;
	result[1][0] = temp[0][0];
	result[2][0] = temp[1][0];
	for (int i = 1; i < n; i++)
	{
		result[0][i] = max(result[0][i - 1], max(result[1][i - 1], result[2][i - 1]));
		result[1][i] = max(result[0][i - 1], result[2][i - 1]) + temp[0][i];
		result[2][i] = max(result[0][i - 1], result[1][i - 1]) + temp[1][i];

	}
	return max(result[0][n - 1], max(result[1][n - 1], result[2][n - 1]));
}


int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		for (int j = 0; j < 2; j++)
		{
			for (int a = 0; a < n; a++)
			{
				scanf("%d", &temp[j][a]);
			}
		}
		printf("%lld\n", dp(n));
	}


	return 0;
}