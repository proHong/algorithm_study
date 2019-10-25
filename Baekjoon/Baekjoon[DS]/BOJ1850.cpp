#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	long long int A, B;
	scanf("%lld %lld", &A, &B);
	long long int GCD;
	GCD = A;
	while (B != 0)
	{
		long long int temp = GCD % B;
		GCD = B;
		B = temp;
	}

	string str;
	str.assign(GCD, '1');
	printf("%s", str.c_str());

	return 0;
}