#include <stdio.h>
using namespace std;

int main()
{
	int num;
	int result[42] = {0,};
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		result[num % 42]++;
	}
	int t = 0;
	for (int i = 0; i < 42; i++)
	{
		if (result[i] != 0)
			t++;
	}
	printf("%d", t);

	return 0;
}