#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(), a.end());

	int x;
	cin >> x;

	int cnt = 0;
	int l(0), r(n - 1);
	while (l < r)
	{
		if (a[l] + a[r] == x)
		{
			cnt++;
			r--;
		}
		else if (a[l] + a[r] < x)
			l++;
		else
			r--;
	}

	cout << cnt;
	return 0;
}
