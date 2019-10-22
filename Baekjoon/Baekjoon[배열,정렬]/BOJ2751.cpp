#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int* temp = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp[i]);
	}
	sort(temp, temp + n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", temp[i]);
	}
	delete[] temp;
	return 0;
}