#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	long long m;

	cin >> n >> m;

	vector<int> trees(n);

	for (int i=0; i<n; i++)
	{
		cin >> trees[i];
	}

	int low = 0;
	int high = *max_element(trees.begin(), trees.end());

	int result = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		long long total = 0;

		for (int tree : trees)
		{
			if (tree > mid)
			{
				total += (tree - mid);
			}
		}

		if (total >= m)
		{
			result = mid;
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

	}

	cout << result << "\n";

	return 0;
}