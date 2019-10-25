#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <queue>
using namespace std;


int main()
{
	int n, count;
	scanf("%d %d", &n, &count);

	queue<int> q;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	printf("<");
	while (!q.empty())
	{
		if (q.size() == 1)
		{
			printf("%d>", q.front());
			q.pop();
		}
		else
		{
			for (int i = 0; i < count - 1; i++)
			{
				q.push(q.front());
				q.pop();
			}
			printf("%d, ", q.front());
			q.pop();
		}

	}

	return 0;
}