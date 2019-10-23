#include <algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	vector<long long> v;
	for (int i = 0; i < n; i++)
	{
		long long num;
		scanf("%lli", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	printf("%lli\n", v[k - 1]);

	return 0;
}