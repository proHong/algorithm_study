#include <stdio.h>
#include <deque>
#include <algorithm>
using namespace std;


int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	deque<int> q;

	for (int i = 1; i <= n; i++)
		q.push_back(i);
	int result = 0;
	for (int i = 0; i < m; i++)
	{
		int x;
		scanf("%d", &x);
		if (q.front() == x)
			q.pop_front();
		else
		{
			int temp = 0;
			while (q.front() != x)
			{
				q.push_back(q.front());
				q.pop_front();
				temp++;
			}
			if(temp <= q.size()- temp)
				result += temp;
			else
				result += q.size() - temp;
			q.pop_front();

		}
	}
	printf("%d", result);

	return 0;
}