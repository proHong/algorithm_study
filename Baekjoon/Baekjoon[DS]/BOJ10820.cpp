#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;


int main()
{
	char c[105];
	while (fgets(c,105,stdin) != NULL)
	{
		string temp(c);
		int arr[4] = { 0, };
		for (int j : temp)
		{
			if (j >= 'a' && j <= 'z')
				arr[0]++;
			else if (j >= 'A' && j <= 'Z')
				arr[1]++;
			else if (j == ' ')
				arr[3]++;
			else if (j >= '0' && j<= '9')
				arr[2]++;
		}
		printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

	}


	return 0;
}