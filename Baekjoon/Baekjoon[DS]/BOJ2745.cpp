#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{

	char st[100001];
	long long num = 0;
	int t;
	scanf("%s %d", &st, &t);
	string str(st);
	int count = 0;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		long temp;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			temp = str[i] - 55;
		}
		else
		{
			temp = str[i] - 48;
		}
		for (int j = 0; j < count; j++)
			temp *= t;
		num += temp;
		count++;
	}
	printf("%lld", num);

	return 0;
}