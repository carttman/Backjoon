#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	int maxDP[3] = { 0,0,0 };
	int minDP[3] = { 0,0,0 };

	for (int i = 0; i < 3; i++)
	{
		int num;
		cin >> num;
		maxDP[i] = num;
		minDP[i] = num;
	}

	int input[3];
	int temp_0, temp_2;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> input[j];

		temp_0 = maxDP[0];
		temp_2 = maxDP[2];

		maxDP[0] = max(maxDP[0], maxDP[1]) + input[0];
		maxDP[2] = max(maxDP[1], maxDP[2]) + input[2];
		maxDP[1] = max(max(temp_0, maxDP[1]), temp_2) + input[1];

		temp_0 = minDP[0];
		temp_2 = minDP[2];

		minDP[0] = min(minDP[0], minDP[1]) + input[0];
		minDP[2] = min(minDP[1], minDP[2]) + input[2];
		minDP[1] = min(min(temp_0, minDP[1]), temp_2) + input[1];
	}

	int mx = max(max(maxDP[0], maxDP[1]), maxDP[2]);
	int mn = min(min(minDP[0], minDP[1]), minDP[2]);
	cout << mx << ' ' << mn;

	return 0;
}