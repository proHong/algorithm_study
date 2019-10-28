#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

int num[1000001] = { 0, };

int make(int X)
{
	num[1] = 0;
	num[2] = 1;
	num[3] = 1;
	for (int i = 4; i <= X; i++)
	{
		num[i] = num[i - 1] + 1;
		if (i % 2 == 0)
			num[i] = min(num[i], num[i / 2] + 1);
		if (i % 3 == 0)
			num[i] = min(num[i], num[i / 3] + 1);
	}
	return num[X];
}


int main()
{
	int n;
	scanf("%d", &n);
;
	printf("%d", make(n));

	return 0;
}