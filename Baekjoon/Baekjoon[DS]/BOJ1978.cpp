#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{
	int n;
	bool num[1001] = { 0, };
	scanf("%d", &n);
	vector<int> v;
	num[0] = true;
	num[1] = true;
	for (int i = 2; i <= 1000; i++)
	{
		int temp = 2;
		if (!num[i])
		{
			while (i*temp <= 1000)
			{
				num[i*temp] = true;
				temp++;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		int t;
		scanf("%d", &t);
		if (!num[t])
			result++;
	}
	printf("%d\n", result);


	return 0;
}