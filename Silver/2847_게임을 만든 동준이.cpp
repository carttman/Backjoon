#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
#include <map>
#include <queue>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int sum = 0;
	for (int i = n - 1; i > 0; i--)
	{
		if (a[i] < a[i - 1])
		{
			sum += abs(-(a[i - 1] - a[i]) - 1);
			a[i - 1] = a[i - 1] - (a[i - 1] - a[i]) - 1;
		}
		else if (a[i] == a[i - 1])
		{
			a[i - 1] -= 1;
			sum++;
		}

	}

	cout << sum;
	return 0;
}