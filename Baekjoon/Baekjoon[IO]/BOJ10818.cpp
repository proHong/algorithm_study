#include <stdio.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int max = -1000000;
	int min = 1000000;

	int cur;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &cur);
		if (cur >= max)
			max = cur;
		if (cur <= min)
			min = cur;
	}

	printf("%d %d", min, max);

	return 0;
}