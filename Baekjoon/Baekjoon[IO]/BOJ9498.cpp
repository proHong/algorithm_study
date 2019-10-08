#include <stdio.h>
using namespace std;

int main()
{
	int x;
	scanf("%d", &x);

	if (x <= 100 && x>=90)
		printf("A");
	else if (x < 90 && x >= 80)
		printf("B");
	else if (x < 80 && x >= 70)
		printf("C");
	else if (x < 70 && x >= 60)
		printf("D");
	else
		printf("F");

	return 0;
}