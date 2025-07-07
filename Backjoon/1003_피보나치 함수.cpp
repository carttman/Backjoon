#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<pair<int, int>> dp(41);
	
	dp[0] = {1, 0};
	dp[1] = {0, 1};

	for (int i=2; i<dp.size(); i++)
	{
		dp[i].first = dp[i-1].first + dp[i-2].first;
		dp[i].second = dp[i-1].second + dp[i-2].second;
	}
	
	int t;
	cin >> t;

	for (int i=0; i<t; i++)
	{
		int n;
		cin >> n;

		cout << dp[n].first << " " << dp[n].second << "\n";
	}
}