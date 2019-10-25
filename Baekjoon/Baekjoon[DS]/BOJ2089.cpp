#include <iostream>
#include <vector>
#include <string>
using namespace std;

void cal(long long N)
{
	if (N == 0)
		return;
	else if (N % -2 == 0)
	{
		cal(N / -2);
		printf("0");
	}
	else if (N > 0)
	{
		cal(N / -2);
		printf("1");
	}
	else
	{
		cal((N - 1) / -2);
		printf("1");
	}
}


int main()
{

	long long N;
	scanf("%lld", &N);
	if (N == 0)
	{
		printf("0");
		return 0;
	}
	cal(N);

	return 0;
}