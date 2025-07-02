#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int k, n;

	cin >> k >> n;

	vector<int> cables(k);

	int max = 0;

	for (int i=0; i<k; i++)
	{
		cin >> cables[i];
	}

	max = *max_element(cables.begin(), cables.end());

	long long left = 1;
	long long right = max;
	long long mid = (left + right) / 2;

	while (left <= right)
	{
		int count = 0;

		for (int i=0; i<k; i++)
		{
			count += cables[i] / mid;
		}

		if (count >= n)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

		mid = (left + right) / 2;
	}

	cout << mid << "\n";

	return 0;
}