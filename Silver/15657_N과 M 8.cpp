#include <algorithm>
#include <iostream>

using namespace std;

int n, m;
int nums[8];
int answer[8];

void BackTracking(int count, int size)
{
	if (size == m)
	{
		for (int i=0; i<m; i++)
			cout << answer[i] << ' ';

		cout << '\n';
		return;
	}

	for (int i=count; i<n; i++)
	{
		answer[size] = nums[i];
		BackTracking(i, size+1);
	}
}

int main()
{
	cin >> n >> m;

	for (int i=0; i<n; i++)
		cin >> nums[i];

	sort(nums, nums + n);

	BackTracking(0,0);

	return 0;
}