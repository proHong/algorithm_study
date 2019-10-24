#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	char c[1001];

	scanf("%s", &c);

	string s(c);
	vector<string> v;
	for (int i = 0; i < s.size(); i++)
	{
		string temp = s.substr(i, s.size());
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	for (auto i : v)
		printf("%s\n", i.c_str());

	return 0;
}