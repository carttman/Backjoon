#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> a;

	while (1)
	{
		int n;
		cin >> n;
		int sum = 0;

		if (n < 0)
			break;

		for (int i = 1; i < n; i++)
		{
			// 1, 2, 4, 7, 14
			if (n % i == 0)
			{
				sum += i;
				a.push_back(i);
			}
		}

		if (sum != n)
		{
			cout << n << " is NOT perfect." << "\n";
		}
		else
		{
			cout << n << " = ";

			for (int i = 0; i < a.size(); i++)
			{
				if (i >= a.size()-1)
				{
					cout << a[i];
				}
				else
				{
					cout << a[i] << " + ";
				}
			}

			cout << "\n";
		}
		a.clear();
	}

	return 0;
}