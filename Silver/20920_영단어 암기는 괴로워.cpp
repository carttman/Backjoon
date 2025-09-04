#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	map<string, int> mp;

	while (n--)
	{
		string s;
		cin >> s;

		if (s.size() >= m)
			mp[s]++;
	}

	vector<pair<string, int>> voca(mp.begin(), mp.end());

	sort(voca.begin(), voca.end(),
		[](pair<string, int> const& left, pair<string, int> const& right) {
			if (left.second != right.second)
				return left.second > right.second;

			if (left.first.size() != right.first.size())
				return left.first.size() > right.first.size();

			return left.first < right.first;

		});

	for (const auto& i : voca)
		cout << i.first << '\n';
	
	return 0;
}