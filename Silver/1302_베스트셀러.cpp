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

typedef pair<string, int> p;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	map<string, int> mp;

	while (n--)
	{
		string s;
		cin >> s;

		mp[s]++;
	}

	vector<p> v(mp.begin(), mp.end());
	sort(v.begin(), v.end(), [](const p& a, const p& b)
		{
			if (a.second == b.second)
				return a.first > b.first;

			return a.second < b.second;
		});

	cout << v.back().first;


	return 0;
}