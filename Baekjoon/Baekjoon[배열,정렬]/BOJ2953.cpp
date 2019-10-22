#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
	int n = 0;
	int score = 0;
	for (int i = 1; i <= 5; i++)
	{
		int total = 0;
		for (int j = 0; j < 4; j++)
		{
			int temp;
			scanf("%d", &temp);
			total += temp;
		}
		if (total > score)
		{
			n = i;
			score = total;
		}
	}
	printf("%d %d\n", n, score);

	return 0;
}