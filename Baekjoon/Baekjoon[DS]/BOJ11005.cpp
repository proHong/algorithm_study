#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	long long num;
	int t;
	scanf("%lld %d", &num, &t);
	vector<int> v;

	while (num >= t)
	{
		v.push_back(num % t);
		num /= t;
	}
	v.push_back(num);

	string str = "";

	while (!v.empty())
	{
		int temp = v.back();
		v.pop_back();
		if (temp > 9)
		{
			char c = temp + 'A' - 10;
			str += c;
		}
		else
			str += temp + 48;
	}
	printf("%s", str.c_str());

	return 0;
}