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

bool chk(vector<vector<int>>& a)
{
	int col = 0;
	for (int i = 0; i < 5; i++)
	{
		bool flag = false;
		for (int j = 0; j < 5; j++)
		{
			if (a[i][j])
				flag = true;
		}

		if (!flag)
			col++;
	}

	int row = 0;
	for (int i = 0; i < 5; i++)
	{
		bool flag = false;
		for (int j = 0; j < 5; j++)
		{
			if (a[j][i])
				flag = true;
		}

		if (!flag)
			row++;
	}

	int left = 0;
	{
		bool flag = false;
		for (int i = 0; i < 5; i++)
		{
			if (a[i][i])
				flag = true;
		}

		if (!flag)
			left++;
	}

	int right = 0;
	{
		bool flag = false;
		for (int i = 0; i < 5; i++)
		{
			if (a[i][4 - i])
				flag = true;
		}

		if (!flag)
			right++;
	}

	if (col + row + left + right >= 3)
		return true;

	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<vector<int>> a(5, vector<int>(5, 0));

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];

	int idx = 25;
	int cnt = 0;
	while (idx--)
	{
		int n;
		cin >> n;

		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
			{
				if (a[i][j] == n)
				{
					a[i][j] = 0;
					cnt++;
				}

				if (chk(a))
				{
					cout << cnt;
					return 0;
				}

			}
	}

	return 0;
}