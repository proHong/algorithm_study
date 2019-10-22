#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	int temp[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp[i]);
	}
	sort(temp, temp + n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", temp[i]);
	}

	return 0;
}