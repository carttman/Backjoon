#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int cache[51][4] = {};

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == 'A')
				cache[j][0]++;
			else if (s[j] == 'C')
				cache[j][1]++;
			else if (s[j] == 'G')
				cache[j][2]++;
			else if (s[j] == 'T')
				cache[j][3]++;
		}
	}

	string ans = "";

	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		int mxCnt = 0;
		int mxIdx = 0;

		for (int j = 0; j < 4; j++)
		{
			if (cache[i][j] > mxCnt)
			{
				mxCnt = cache[i][j];
				mxIdx = j;
			}
		}

		if (mxIdx == 0)
			ans += 'A';
		else if (mxIdx == 1)
			ans += 'C';
		else if (mxIdx == 2)
			ans += 'G';
		else if (mxIdx == 3)
			ans += 'T';

		sum += (n - mxCnt);
	}

	cout << ans << '\n' << sum;
	return 0;
}