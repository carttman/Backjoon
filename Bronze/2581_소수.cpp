#include <iostream>
#include <vector>
#
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> m >> n;

	vector<int> numbers;
	//1 3
	for (int i = m; i <= n; i++)
	{
		if (i == 1)
			continue;

		bool isPrimel = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrimel = false;
			}
		}

		if (isPrimel)
		{
			numbers.push_back(i);
		}
	}

	if (numbers.empty())
	{
		cout << -1;
	}
	else
	{
		int sum = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			sum += numbers[i];
		}

		cout << sum << "\n" << numbers[0];
	}

	return 0;
}