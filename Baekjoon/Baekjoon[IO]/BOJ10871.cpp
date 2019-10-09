#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	scanf("%d %d", &n, &x);

	int cur;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &cur);
		if (cur < x)
			printf("%d ", cur);
	}
	return 0;
}