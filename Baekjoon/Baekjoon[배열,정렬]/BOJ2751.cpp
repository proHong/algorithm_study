#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

bool cmp(string a, string b)
{
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
	
}


int main()
{
	int n;
	scanf("%d", &n);
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		char temp[51];
		scanf("%s", &temp);
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), cmp);
	v.erase(unique(v.begin(), v.end()),v.end());

	for (int i = 0; i < v.size(); i++)
	{
		printf("%s\n", v[i].c_str());
	}

	return 0;
}