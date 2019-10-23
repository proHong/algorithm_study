#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);

	int Stack[10001] = { 0, };
	int cur = -1;

	for (int i = 0; i < n; i++)
	{
		char s[10];
		scanf("%s", &s);

		if (strcmp(s, "push") == 0)
		{
			cur++;
			int temp;
			scanf("%d", &temp);
			Stack[cur] = temp;
		}
		else if (strcmp(s, "pop") == 0)
		{
			if (cur == -1)
				printf("-1\n");
			else
			{
				printf("%d\n", Stack[cur]);
				cur--;
			}

		}
		else if (strcmp(s, "size") == 0)
		{
			printf("%d\n", cur + 1);
		}
		else if (strcmp(s, "empty") == 0)
		{
			if (cur == -1)
				printf("1\n");
			else
				printf("0\n");

		}
		else if (strcmp(s, "top") == 0)
		{
			if (cur == -1)
				printf("-1\n");
			else
				printf("%d\n", Stack[cur]);
		}
	}

	return 0;
}