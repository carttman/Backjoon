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
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; string ansName, ans;
	cin >> n >> ansName;

	vector<pair<string, string>> list;

	for (int i = 0; i < n; i++)
	{
		string s, tmpAns;
		cin >> s >> tmpAns;
		
		if (ansName == s)
		{
			ans = tmpAns;
			break;
		}
		
		list.emplace_back(s, tmpAns);
	}

	int cnt = 0;
	for (auto& i : list)
		if (i.first != ansName && i.second == ans)
			cnt++;

	cout << cnt;
	return 0;
}