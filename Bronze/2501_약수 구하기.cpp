#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int p, q;
	cin >> p >> q;

	vector<int> a;

	for (int i=1; i<=p; i++)
	{
		if (p % i == 0)
		{
			a.push_back(i);
		}
	}

	if (a.size() < q)
	{
		cout << 0;
	}
	else
	{
		cout << a[q-1];
	}

	return 0;
}