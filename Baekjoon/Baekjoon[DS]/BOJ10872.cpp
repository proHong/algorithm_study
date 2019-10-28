#include <iostream>
#include <vector>
#include <string>
using namespace std;

int f(int n)
{
	if (n > 1)
		return n * f(n - 1);
	else
		return 1;
}

int main()
{
	int n;
	scanf("%d", &n);

	int result = f(n);
	printf("%d\n", result);

	return 0;
}