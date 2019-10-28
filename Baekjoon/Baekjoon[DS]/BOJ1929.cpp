#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{
	int m, n;
	bool num[1000001] = { 0, };
	scanf("%d %d", &m, &n);
	vector<int> v;
	num[0] = true;
	num[1] = true;
	for (int i = 2; i <= 1000000; i++)
	{
		int temp = 2;
		if (!num[i])
		{
			while (i * temp <= 1000000)
			{
				num[i * temp] = true;
				temp++;
			}
		}
	}
	int result = 0;
	for (int i = m; i <= n; i++)
	{
		if (!num[i])
			printf("%d\n", i);
	}


	return 0;
}