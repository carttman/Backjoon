#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> triangle(n);
	int dp[501] = {0,};

	for (int i=0; i<triangle.size(); i++)
	{
		for (int j=0; j<i+1; j++)
		{
			int tmp;
			cin >> tmp;

			triangle[i].push_back(tmp);
		}
	}

	dp[0] = triangle[0][0];
	//dp[1] = max(dp[0] + triangle[1][0], dp[0] + triangle[1][1]);
	
	for (int i=1; i<triangle.size(); i++)
	{
		for (int j=1; j<triangle[i].size(); j++)
		{
			dp[i] = max(dp[i-1] + triangle[i][j-1], dp[i-1] + triangle[i][j]);
		}
	}

	cout << dp[n-1];
}