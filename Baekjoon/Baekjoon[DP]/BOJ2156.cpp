#include <stdio.h>
#include <algorithm>
using namespace std;

int temp[10001];
long long result[10001];


long long dp(int n)
{
	result[1] = temp[1];
	result[2] = temp[1] + temp[2];
	for (int i = 3; i <= n; i++) 
	{
		result[i] = max(result[i - 1], max(result[i - 2] + temp[i], result[i - 3] + temp[i] + temp[i - 1]));	
	}
	return result[n];
}

int main()
{
	int t;
	scanf("%d", &t);
	temp[0] = 0;
	for (int i = 1; i <= t; i++)
	{
		int n;
		scanf("%d", &n);
		temp[i] = n;
	}
	printf("%lld\n", dp(t));

	return 0;
}