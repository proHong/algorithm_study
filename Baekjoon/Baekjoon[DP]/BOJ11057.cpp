#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

int num[1001][10] = { 0, };

int make(int X)
{
	for (int i = 0; i < 10; i++)
	{
		num[1][i] = 1;
	}

	for (int i = 2; i <= X; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				num[i][j] += num[i - 1][k];
			}
			num[i][j] %= 10007;
		}
	}
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += num[X][i];
	}
	result %= 10007;
	return result;
}


int main()
{
	int n;
	scanf("%d", &n);

	printf("%d\n", make(n));

	return 0;
}