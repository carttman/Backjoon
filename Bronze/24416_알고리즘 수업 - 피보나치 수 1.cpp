#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[40];

	dp[0] = 0;
	dp[1] = 1;

	int cnt = 0;
	for (int i=2; i<=n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
		cnt++;
	}

	cout << dp[n] << " " << cnt-1;
	return 0;
}