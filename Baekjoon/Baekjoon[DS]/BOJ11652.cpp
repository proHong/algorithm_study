#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);

	vector<long long> v;
	for (int i = 0; i < n; i++)
	{
		long long num;
		scanf("%lli", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	long long result = v[0];
	int count = 0;
	long long temp = v[0];
	int tcount = 0;
	for (int i = 0; i < n; i++)
	{
		if (temp == v[i])
		{
			tcount++;
			if (i == n - 1)
			{
				if (count < tcount)
				{
					result = v[i];
					count = tcount;
				}
			}
		}
		else
		{
			if (count < tcount)
			{
				result = v[i - 1];
				count = tcount;
			}
			temp = v[i];
			tcount = 1;
		}
	}
	printf("%lli\n", result);

	return 0;
}