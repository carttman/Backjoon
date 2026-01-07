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

	string s;
	cin >> s;

	string ans;
	for (int i = 1; i <= s.size() - 2; i++)
	{
		for (int j = 1; j <= s.size() - i - 1; j++)
		{
			string a = s.substr(0, i);
			string b = s.substr(i, j);
			string c = s.substr(i + j);

			reverse(a.begin(), a.end());
			reverse(b.begin(), b.end());
			reverse(c.begin(), c.end());

			string res = a + b + c;

			if (ans.empty())
				ans = res;
			else if (ans > res)
				ans = res;
		}
	}

	cout << ans;
	return 0;
}