#include <stdio.h>
using namespace std;

int main()
{
	int arr[8];
	bool at = true;
	bool dt = true;
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
		if (i == 0)
		{
			if (arr[0] == 1)
				dt = false;
			else if (arr[0] == 8)
				at = false;
			else
			{
				dt = false;
				at = false;
			}
		}
		else
		{
			if (at)
			{
				if (arr[i] != arr[i - 1] + 1)
					at = false;
			}
			if (dt)
			{
				if (arr[i] != arr[i - 1] - 1)
					dt = false;
			}
		}
	}
	if (at)
		printf("ascending");
	else if (dt)
		printf("descending");
	else
		printf("mixed");

	return 0;
}