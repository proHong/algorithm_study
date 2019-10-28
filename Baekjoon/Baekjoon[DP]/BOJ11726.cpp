#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;

int num[1001] = { 0, };

int make(int X)
{
	num[1] = 1;
	num[2] = 2;
	for (int i = 3; i <= X; i++)
	{
		num[i] = (num[i - 1] + num[i - 2])%10007;
	}
	return num[X];
}


int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d", make(n));

	return 0;
}