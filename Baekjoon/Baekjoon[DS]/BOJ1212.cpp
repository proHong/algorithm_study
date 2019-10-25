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
	for (int i = 0; i < str.size(); i++)
	{
		int temp = str[i] - 48;
		string ts = "";
		if (i != 0 && temp < 2)
			result += "00";
		else if (i != 0 && temp < 4)
			result += "0";
		string a = "";
		while (temp >= 2)
		{
			int k = temp % 2;
			temp /= 2;
			a = k + 48;
			ts = a + ts;
		}
		a = temp + 48;
		ts = a + ts;
		result += ts;
	}
	printf("%s", result.c_str());

	return 0;
}