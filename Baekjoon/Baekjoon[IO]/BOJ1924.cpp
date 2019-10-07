#include <stdio.h>
using namespace std;

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);

	if (x > 1)
		y += 31;
	if (x > 2)
		y += 28;
	if (x > 3)
		y += 31;
	if (x > 4)
		y += 30;
	if (x > 5)
		y += 31;
	if (x > 6)
		y += 30;
	if (x > 7)
		y += 31;
	if (x > 8)
		y += 31;
	if (x > 9)
		y += 30;
	if (x > 10)
		y += 31;
	if (x > 11)
		y += 30;

	if (y % 7 == 1)
		printf("MON");
	else if (y % 7 == 2)
		printf("TUE");
	else if (y % 7 == 3)
		printf("WED");
	else if (y % 7 == 4)
		printf("THU");
	else if (y % 7 == 5)
		printf("FRI");
	else if (y % 7 == 6)
		printf("SAT");
	else
		printf("SUN");

	return 0;
}