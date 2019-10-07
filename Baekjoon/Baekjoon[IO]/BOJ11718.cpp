#include <stdio.h>
using namespace std;

int main()
{
	char input[111];

	while (scanf("%[^\n]\n", input) == 1)
	{
		printf("%s\n", input);
	}
	return 0;
}