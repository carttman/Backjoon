#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> triangle(n);
	//int dp[501] = {0,};

	for (int i=0; i<triangle.size(); i++)
	{
		for (int j=0; j<i+1; j++)
		{
			int tmp;
			cin >> tmp;

			triangle[i].push_back(tmp);
		}
	}

	//dp[0] = triangle[0][0];
	
	/*for (int i=1; i<n; i++)
	{
		for (int j=1; j<triangle[i].size(); j++)
		{
			dp[i] = max(dp[i-1] + triangle[i][j-1], dp[i-1] + triangle[i][j]);
		}
	}*/

	vector<vector<int>> copy(n);
	copy = triangle;

	copy[1][0] = copy[1][0] + copy[0][0];
	copy[1][1] = copy[1][1] + copy[0][0];


	for (int i=2; i<n; i++)
	{
		for (int j=1; j<=copy[i].size(); j++)
		{	
			if (j==1)//맨 왼쪽
			{
				copy[i][j-1] = copy[i][j-1] + copy[i-1][j-1];
				
			}
			else if (j == copy[i].size())//맨 오른쪽
			{
				copy[i][j - 1] = copy[i][j - 1] + copy[i - 1][j - 1];
			}
			else
			{
				copy[i][j-1] = copy[i][j-1] + max(copy[i-1][j-1], copy[i-1][j]);
			}

			
		}
	}
	

	cout << 1;
	//cout << dp[n-1];
}