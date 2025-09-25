#include <algorithm>
#include <iostream>

using namespace std;
int n, m;
int nums[8];
bool Visited[8];
int Answer[8];

void BackTracking(int count, int size)
{
	if (size == m)
	{
		for (int i=0; i<m; i++)
		{
			cout << Answer[i] << " ";
		}
		cout << '\n';
		return;
	}


	for (int i=count; i<n; i++)
	{
		if (!Visited[i])
		{
			Visited[i] = true;
			Answer[size] = nums[i];
			BackTracking(i, size + 1);
			Visited[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i=0; i<n; i++)
	{
		cin >> nums[i];
	}

	sort(nums, nums + n);
	BackTracking(0, 0);
	return 0;
}