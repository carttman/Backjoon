#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> arr(n);
vector<int> temp(n);

void merge(int left, int mid, int right)
{
	int l, m, t;

	l = left;
	m = mid + 1;
	t = left;

	while (l <= mid && m <= right)
	{
		if (arr[l] <= arr[m])
			temp[t++] = arr[l++];
		else
			temp[t++] = arr[m++];
	}

	if (l > mid)
	{
		while (m <= right)
			temp[t++] = arr[m++];
	}
	else
	{
		while (l <= mid)
			temp[t++] = arr[l++];
	}

	while (left <= right)
	{
		arr[left] = temp[left];
		left++;
	}
}

void merge_sort(int left, int right)
{
	int mid;

	if (left >= right)
		return;

	mid = (left + right) / 2;
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	merge(left, mid, right);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;

	arr.resize(n, 0);
	temp.resize(n, 0);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	//sort(arr.begin(), arr.end());
	merge_sort(0, n - 1);
	int x;
	cin >> x;

	int cnt = 0;
	int l(0), r(n - 1);
	while (l < r)
	{
		if (arr[l] + arr[r] == x)
		{
			cnt++;
			r--;
		}
		else if (arr[l] + arr[r] < x)
			l++;
		else
			r--;
	}

	cout << cnt;
	return 0;
}
