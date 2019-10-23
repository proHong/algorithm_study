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
	for (auto i : temp)
	{
		v[i-97]++;
	}
	for (auto i : v)
	{
		printf("%d ", i);
	}


	return 0;
}