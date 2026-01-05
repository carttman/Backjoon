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
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<string> room(n);

	for (int i = 0; i < n; i++)
		cin >> room[i];

	int c = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		bool flag = false;
		for (int j = 0; j < n; j++)
		{
			if (room[i][j] == '.')
				cnt++;
			else
			{
				cnt = 0;
				flag = false;
			}

			if (cnt > 1 && !flag)
			{
				c++;
				flag = true;
			}
		}
	}

	int r = 0;
	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		bool flag = false;
		for (int j = 0; j < n; j++)
		{
			if (room[j][i] == '.')
				cnt++;
			else
			{
				cnt = 0;
				flag = false;
			}

			if (cnt > 1 && !flag)
			{
				r++;
				flag = true;
			}
		}
	}

	cout << c << ' ' << r;
	return 0;
}