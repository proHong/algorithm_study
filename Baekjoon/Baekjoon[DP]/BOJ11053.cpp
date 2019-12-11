#include <stdio.h>
#include <algorithm>
using namespace std;

int A[1001];
int d[1001];

int dp(int n)
{
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		int max = 0;
		for (int j = 0; j < i; j++)
		{
			if (A[j]<A[i] && d[j]>max)
				max = d[j];
		}
		d[i] = max + 1;
	}
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result = max(result, d[i]);
	}

	return result;
}


int main()
{

	int N;
	scanf("%d",&N);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &A[i]);
	}
	printf("%d\n",dp(N));


	return 0;
}