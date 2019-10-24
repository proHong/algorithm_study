#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;


int main()
{
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	string s1, s2, s3, s4;
	s1 = to_string(a);
	s2 = to_string(b);
	s3 = to_string(c);
	s4 = to_string(d);
	s1 = s1 + s2;
	s3 = s3 + s4;
	long long n1 = stoll(s1);
	long long n2 = stoll(s3);
	long long result = n1 + n2;

	printf("%lli\n", result);

	return 0;
}