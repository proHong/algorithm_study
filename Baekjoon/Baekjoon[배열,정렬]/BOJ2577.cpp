#include <stdio.h>
using namespace std;

int main()
{
	int A, B, C;

	scanf("%d\n%d\n%d", &A, &B, &C);
	char num[10];
	int m = A * B * C;
	sprintf(num, "%d", m);
	int i = 0;
	while (m > 0)
	{
		i++;
		m /= 10;
	}
	int arr[10] = { 0, };
	for (int j = 0; j < i; j++)
	{
		arr[(int)num[j]-48]++;
	}
	for (int k = 0; k < 10; k++)
	{
		printf("%d\n", arr[k]);
	}
	return 0;
}