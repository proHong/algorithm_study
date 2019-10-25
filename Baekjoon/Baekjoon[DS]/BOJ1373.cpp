#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{

	char st[1000001];
	scanf("%s", &st);
	string str(st);
	string result = "";
	if (str.size() % 3 == 2)
		str = "0" + str;
	else if (str.size() % 3 == 1)
		str = "00" + str;
	for (int i = 0; i < str.size(); i = i + 3)
	{
		int temp = ((str[i] - 48) * 2 * 2) + ((str[i + 1] - 48) * 2) + ((str[i + 2] - 48));
		result += temp + 48;
	}
	printf("%s", result.c_str());

	return 0;
}