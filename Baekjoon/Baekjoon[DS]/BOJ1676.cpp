#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	int result = 0;
	for (int i = 2; i <= n; i++)
	{
		if (i % 125 == 0)
			result += 3;
		else if (i % 25 == 0)
			result += 2;
		else if (i % 5 == 0)
			result++;
	}
	printf("%d\n", result);

	return 0;
}