#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <deque>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);

	deque<int> d;
	for (int i = 0; i < n; i++)
	{
		char s[20];
		scanf("%s", &s);

		if (strcmp(s, "push_front") == 0)
		{
			int temp;
			scanf("%d", &temp);
			d.push_front(temp);
		}
		else if (strcmp(s, "push_back") == 0)
		{
			int temp;
			scanf("%d", &temp);
			d.push_back(temp);
		}
		else if (strcmp(s, "pop_front") == 0)
		{
			if (d.empty())
				printf("-1\n");
			else
			{
				printf("%d\n", d.front());
				d.pop_front();
			}

		}
		else if (strcmp(s, "pop_back") == 0)
		{
			if (d.empty())
				printf("-1\n");
			else
			{
				printf("%d\n", d.back());
				d.pop_back();
			}
		}
		else if (strcmp(s, "size") == 0)
		{
			printf("%d\n", d.size());
		}
		else if (strcmp(s, "empty") == 0)
		{
			if (d.empty())
				printf("1\n");
			else
				printf("0\n");

		}
		else if (strcmp(s, "front") == 0)
		{
			if (d.empty())
				printf("-1\n");
			else
				printf("%d\n", d.front());
		}
		else if (strcmp(s, "back") == 0)
		{
			if (d.empty())
				printf("-1\n");
			else
				printf("%d\n", d.back());
		}
	}

	return 0;
}