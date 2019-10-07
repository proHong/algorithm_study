#include <stdio.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}

	printf("%d", result);

	return 0;
}