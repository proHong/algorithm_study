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
	string s;
	for (auto i : temp)
	{
		if ((i >= 'A' && i <= 'Z')||(i >= 'a' && i <= 'z'))
		{
			int t = i + 13;
			if (i >= 'A' && i <= 'Z' && t > 'Z')
				t = 'A' + t - 'Z' - 1;
			if (i >= 'a' && i <= 'z' && t > 'z')
				t = 'a' + t - 'z' - 1;
			s.push_back(t);
		}
		else
			s.push_back(i);
	}
	printf("%s\n", s.c_str());

	return 0;
}