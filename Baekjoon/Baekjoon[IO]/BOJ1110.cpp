#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int cur = n;
	int i = 0;
	do{
		cur = (cur % 10) * 10 + (cur / 10 + cur % 10) % 10;
		i++;
	}while (n != cur);

	printf("%d", i);
	return 0;
}