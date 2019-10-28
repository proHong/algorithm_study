#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{
	bool num[1000001] = { 0, };
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
	int temp;
	while (true)
	{
		scanf("%d", &temp);
		if (temp == 0)
			break;
		bool k = false;
		for (int i = 3; i <= temp/2; i += 2)
		{
			if (!num[temp - i])
			{
				printf("%d = %d + %d\n", temp, i, temp - i);
				k = true;
				break;
			}
		}
		if (!k)
			printf("Goldbach's conjecture is wrong.\n");

	}


	return 0;
}