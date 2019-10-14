#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		char temp[80];
		int score = 0;
		int p = 0;
		scanf("%s", &temp);
		int len = strlen(temp);
		for (int j = 0; j < len; j++)
		{
			if (temp[j] == 'O')
			{
				p++;
				score += p;
			}
			else
				p = 0;
		}
		printf("%d\n", score);
	}

	return 0;
}