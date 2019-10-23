#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;


int main()
{
	char c[101];
	scanf("%s", &c);

	string temp(c);
	int v[26] = { 0, };
	for (int i = 0; i < temp.size(); i++)
	{
		if (v[temp[i] - 97] == 0)
			v[temp[i] - 97] = i + 1;
	}
	for (auto i : v)
	{
		printf("%d ", i - 1);
	}


	return 0;
}