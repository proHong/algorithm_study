#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

long long num[91][2] = { 0, };

long long make(int X)
{
	num[1][0] = 0;
	num[1][1] = 1;

	for (int i = 2; i <= X; i++)
	{

		num[i][0] = num[i - 1][0] + num[i - 1][1];
		num[i][1] = num[i - 1][0];
	}
	long long result = num[X][0] + num[X][1];

	return result;
}


int main()
{
	int n;
	scanf("%d", &n);

	printf("%d\n", make(n));

	return 0;
}