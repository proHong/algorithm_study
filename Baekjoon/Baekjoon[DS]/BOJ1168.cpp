#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n, count;
	scanf("%d %d", &n, &count);

	vector<int> v;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}
	printf("<");
	int cur = 0;
	while (!v.empty())
	{
		if (v.size() == 1)
		{
			printf("%d>", v[0]);
			v.pop_back();
		}
		else
		{
			cur = (cur + count - 1) % v.size();
			printf("%d, ", v[cur]);
			v.erase(v.begin() + cur);
		}

	}

	return 0;
}