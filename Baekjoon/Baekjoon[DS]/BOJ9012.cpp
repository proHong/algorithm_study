#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;


int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char temp[51];
		scanf("%s", &temp);
		string s(temp);
		int count = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '(')
				count++;
			else if (s[j] == ')')
				count--;
			if (count < 0)
			{
				printf("NO\n");
				break;
			}
			if (j == s.size() - 1)
			{
				if(count == 0)
					printf("YES\n");
				else
					printf("NO\n");
			}
		}
	}

	return 0;
}