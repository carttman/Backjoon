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

	int n, cur, mx;
	cin >> n;

	vector<int> rope(n);

	for (int i = 0; i < n; i++)
		cin >> rope[i];

	sort(rope.begin(), rope.end());

	mx = rope.back();

	for (int i = n - 1; i >= 0; i--)
	{
		cur = rope[i] * (n - i);

		mx = max(mx, cur);
	}

	cout << mx;
	return 0;
}