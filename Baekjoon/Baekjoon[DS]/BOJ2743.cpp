#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;


int main()
{
	char c[105];
	fgets(c, 105, stdin);
	string temp(c);
	printf("%d\n", temp.size()-1);

	return 0;
}