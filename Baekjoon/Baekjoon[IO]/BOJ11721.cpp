#include <stdio.h>
using namespace std;

int main()
{
	char c[101];

	while (scanf("%10s", c) == 1)
	{
		printf("%s\n", c);
	}

	return 0;
}