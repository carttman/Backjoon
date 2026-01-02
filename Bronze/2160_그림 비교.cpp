#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<vector<string>> a(n, vector<string>(5));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			string s;
			cin >> s;

			a[i][j] += s;
		}
	}

	int minA[2] = {};

	int minCnt = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		vector<string> tmp1 = a[i];

		for (int j = i + 1; j < n; j++)
		{
			vector<string> tmp2 = a[j];

			int cnt = getDiff(tmp1, tmp2);

			if (cnt < minCnt)
			{
				minCnt = cnt;
				minA[0] = i + 1;
				minA[1] = j + 1;
			}
		}
	}

	cout << minA[0] << ' ' << minA[1];
	return 0;
}