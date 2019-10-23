#include <algorithm>
#include <stdio.h>
#include <string.h>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);

	int Queue[10001] = { 0, };
	int back = -1;
	int front = 0;

	for (int i = 0; i < n; i++)
	{
		char s[10];
		scanf("%s", &s);

		if (strcmp(s, "push") == 0)
		{
			back++;
			int temp;
			scanf("%d", &temp);
			Queue[back] = temp;
		}
		else if (strcmp(s, "pop") == 0)
		{
			if (back - front == -1)
				printf("-1\n");
			else
			{
				printf("%d\n", Queue[front]);
				front++;
			}

		}
		else if (strcmp(s, "size") == 0)
		{
			printf("%d\n", back - front + 1);
		}
		else if (strcmp(s, "empty") == 0)
		{
			if (back - front == -1)
				printf("1\n");
			else
				printf("0\n");

		}
		else if (strcmp(s, "front") == 0)
		{
			if (back - front == -1)
				printf("-1\n");
			else
				printf("%d\n", Queue[front]);
		}
		else if (strcmp(s, "back") == 0)
		{
			if (back - front == -1)
				printf("-1\n");
			else
				printf("%d\n", Queue[back]);
		}
	}

	return 0;
}