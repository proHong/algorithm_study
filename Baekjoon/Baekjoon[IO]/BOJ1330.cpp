#include <stdio.h>
using namespace std;

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > y)
		printf(">");
	else if (x < y)
		printf("<");
	else if (x == y)
		printf("==");

	return 0;
}