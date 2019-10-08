#include <stdio.h>
using namespace std;

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int y1 = y % 10;
	int y10 = (y % 100 - y1)/10;
	int y100 = (y - y10)/100;
	printf("%d\n", x * y1);
	printf("%d\n", x * y10);
	printf("%d\n", x * y100);
	printf("%d\n", x * y);


	return 0;
}