#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", (A % C + B % C) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", (A % C * B % C) % C);

	return 0;
}