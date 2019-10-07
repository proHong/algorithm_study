#include <stdio.h>
using namespace std;

int main()
{
	int num;
	char c[101];
	scanf("%d\n", &num);
	scanf("%s", c);
	int result = 0;

	for(int i = 0;i<num;i++)
	{
		result += (c[i] - 48);
	}
	printf("%d", result);

	return 0;
}