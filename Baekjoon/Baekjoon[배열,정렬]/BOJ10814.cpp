#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

bool cmp(pair<pair<int, int>, string> a, pair<pair<int, int>, string> b)
{
	if (a.first.first == b.first.first)
	{
		return a.first.second < b.first.second;
	}
	else
		return a.first.first < b.first.first;
}


int main()
{
	int n;
	scanf("%d", &n);
	vector<pair<pair<int, int>, string>> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		char y[51];
		scanf("%d %s", &x, &y);
		string temp(y);
		v.push_back(make_pair(make_pair(x, i), temp));
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		printf("%d %s\n", v[i].first.first, v[i].second.c_str());
	}

	return 0;
}