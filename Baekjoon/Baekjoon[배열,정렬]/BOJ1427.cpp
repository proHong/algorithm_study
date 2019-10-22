#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}


int main()
{
	char temp[11];
	scanf("%s", &temp);
	string s(temp);
	sort(s.begin(), s.end(), cmp);
	printf("%s", s.c_str());


	return 0;
}