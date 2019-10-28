#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{
	int A, B;
	int n;
	vector<int> v;
	scanf("%d %d", &A, &B);
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int t;
		scanf("%d", &t);
		v.push_back(t);
	}

	long long temp = 0;
	int k = 1;
	while (!v.empty())
	{
		if (k == 1)
			temp += v.back();
		else
			temp += v.back()*k;
		k *= A;
		v.pop_back();
	}
	
	while (temp >= B)
	{
		v.push_back(temp % B);
		temp /= B;
	}
	v.push_back(temp);

	while (!v.empty())
	{
		printf("%d ", v.back());
		v.pop_back();
	}



	return 0;
}