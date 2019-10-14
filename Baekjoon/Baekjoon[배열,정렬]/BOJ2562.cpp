#include <stdio.h>
using namespace std;

int main()
{
	int num, max, temp;
	max = 0;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &temp);
		if (max < temp)
		{
			num = i;
			max = temp;
		}
	}

	printf("%d\n%d", max, num);

	return 0;
}