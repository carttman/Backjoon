#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> a(9, 0);

	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
		sum += a[i];
	}

	bool flag = false;
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (sum - (a[i] + a[j]) == 100)
			{
				a[i] = 0;
				a[j] = 0;
				
				sort(a.begin(), a.end());
				for (int k = 2; k < a.size(); k++)
					cout << a[k] << '\n';
				return 0;
			}
		}
	}

	return 0;
	
}