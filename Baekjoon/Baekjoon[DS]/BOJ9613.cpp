#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int tc;
	scanf("%d", &tc);
	for (int j = 0; j < tc; j++)
	{
		int n;
		scanf("%d", &n);
		vector<long long> v;
		for (int i = 0; i < n; i++)
		{
			long long t;
			scanf("%lld", &t);
			v.push_back(t);
		}
		long long sum = 0;
		while (v.size() > 1)
		{
			long long A = v.back();
			v.pop_back();
			for (int k : v)
			{
				long long B = k;
				long long GCD = A;
				while (B != 0)
				{
					long long temp = GCD % B;
					GCD = B;
					B = temp;
				}
				sum += GCD;
			}
		}
		printf("%lld\n", sum);
	}

	return 0;
}