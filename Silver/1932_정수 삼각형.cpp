#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> dp(n);

	for (int i=0; i<dp.size(); i++)
	{
		for (int j=0; j<i+1; j++)
		{
			int tmp;
			cin >> tmp;

			dp[i].push_back(tmp);
		}
	}

	if (n==1)
	{
		cout << dp[0][0];
		return 0;
	}

	dp[1][0] = dp[1][0] + dp[0][0];
	dp[1][1] = dp[1][1] + dp[0][0];

	for (int i=2; i<n; i++)
	{
		for (int j=0; j<dp[i].size(); j++)
		{	
			if (j==0)//맨 왼쪽
			{
				dp[i][j] = dp[i][j] + dp[i-1][j];
				
			}
			else if (j == dp[i].size()-1)//맨 오른쪽
			{
				dp[i][j] = dp[i][j] + dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = dp[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
			}
		}
	}

	int mmax = 0;

	for (int i=0; i<n; i++)
	{
		mmax = max(mmax, dp[n-1][i]);
	}

	cout << mmax;
	return 0;
}