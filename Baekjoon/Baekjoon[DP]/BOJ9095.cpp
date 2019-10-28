#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

int num[11] = { 0, };

int make(int X)
{
	num[1] = 1;
	num[2] = 2;
	num[3] = 4;

	for (int i = 4; i <= X; i++)
	{
		num[i] = num[i - 1] + num[i - 2] + num[i - 3];
	}
	return num[X];
}


int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		int n;
		scanf("%d", &n);

		printf("%d\n", make(n));
	}

	return 0;
}