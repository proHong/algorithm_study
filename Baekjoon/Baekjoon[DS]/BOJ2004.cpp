#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

long long five(long long num)
{
	long long count = 0;

	for (long long i = 5; num / i >= 1; i *= 5)
		count += num / i;
	return count;
}

long long two(long long num)
{
	long long count = 0;

	for (long long i = 2; num / i >= 1; i *= 2)
		count += num / i;
	return count;
}

int main()
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	int fivecount = (five(n) - five(m) - five(n - m));
	int twocount = (two(n) - two(m) - two(n - m));

	printf("%d",min(fivecount, twocount));

	return 0;
}