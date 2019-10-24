#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	char c[100001];

	scanf("%s", &c);
	string s(c);
	vector<char> L, R;

	for (auto i : s)
	{
		L.push_back(i);
	}

	int n;
	scanf("%d\n", &n);

	char cmd[20];
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			scanf("%[^\n]", &cmd);
		else
			scanf("%[^\n]\n", &cmd);
		if (cmd[0] == 'L')
		{
			if (L.size() != 0)
			{
				R.push_back(L.back());
				L.pop_back();
			}
		}
		else if (cmd[0] == 'D')
		{
			if (R.size() != 0)
			{
				L.push_back(R.back());
				R.pop_back();
			}
		}
		else if (cmd[0] == 'B')
		{
			if (L.size() != 0)
			{
				L.pop_back();
			}
		}
		else if (cmd[0] == 'P')
		{
			L.push_back(cmd[2]);
		}
	}
	for (auto i : L)
	{
		printf("%c", i);
	}
	for (int i = R.size() - 1; i >= 0; i--)
	{
		printf("%c", R[i]);
	}
	printf("\n");

	return 0;
}