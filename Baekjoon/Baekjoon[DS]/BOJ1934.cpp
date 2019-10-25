#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int A, B;
		scanf("%d %d", &A, &B);
		int GCD, LCM;
		LCM = A * B;
		GCD = A;
		while (B != 0)
		{
			int temp = GCD % B;
			GCD = B;
			B = temp;
		}
		LCM = LCM / GCD;

		printf("%d\n", LCM);
	}

	return 0;
}