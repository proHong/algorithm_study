#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class info {
public:
	string name;
	int a, b, c;
};

bool cmp(info a, info b)
{
	if (a.a == b.a)
	{
		if (a.b == b.b)
		{
			if (a.c == b.c)
				return a.name < b.name;
			else
				return a.c > b.c;
		}
		else
			return a.b < b.b;
	}
	else
		return a.a > b.a;
}


int main()
{
	int n;
	scanf("%d", &n);
	vector<info> v;
	for (int i = 0; i < n; i++)
	{
		char name[11];
		int a, b, c;
		scanf("%s %d %d %d", &name, &a, &b, &c);
		info temp;
		string st(name);
		temp.name = st;
		temp.a = a;
		temp.b = b;
		temp.c = c;
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
	{
		printf("%s\n", v[i].name.c_str());
	}


	return 0;
}