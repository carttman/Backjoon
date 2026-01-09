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

	vector<pair<int, int>> a(n);
	vector<int> p(n);

	for (int i=0; i<n; i++)
	{
		cin >> a[i].first;
		a[i].second = i;
	}

	sort(a.begin(), a.end());

	for (int i=0; i<n; i++)
		p[a[i].second] = i;

	for (const auto& i : p)
		cout << i << ' ';

	return 0;
}