#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;

}


int main()
{
	int n;
	scanf("%d", &n);
	vector<pair<int,int>> v;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		printf("%d %d\n", v[i].first, v[i].second);
	}

	return 0;
}