#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

long long num[101][10] = { 0, };

long long make(int X)
{
	for (int i = 1; i < 10; i++)
	{
		num[1][i] = 1;
	}

	for (int i = 2; i <= X; i++)
	{
		num[i][0] = num[i - 1][1] % 1000000000;
		num[i][9] = num[i - 1][8] % 1000000000;
		for (int j = 1; j < 9; j++)
		{
			num[i][j] = (num[i - 1][j - 1] + num[i - 1][j + 1]) % 1000000000;
		}
	}
	long long result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += num[X][i];
	}
	result %= 1000000000;
	return result;
}


int main()
{
	int n;
	scanf("%d", &n);

	printf("%d\n", make(n));

	return 0;
}