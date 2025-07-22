#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int dp[10] = {0,1,1,1,1,1,1,1,1,1};
	int dp2[10] = {0,};

	for (int k=1; k<n; k++)
	{
		for (int i=0; i<=9; i++)
		{
			if (i==0)
			{
				dp2[0] = dp[1];
			}
			else if (i==9)
			{
				dp2[9] = dp[8];
			}
			else
			{
				dp2[i] = (dp[i-1] + dp[i+1]) % 1000000000;
			}
		}

		for (int i=0; i<=9; i++)
		{
			dp[i] = dp2[i];
		}
	}

	int sum = 0;
	for (int i=0; i<=9; i++)
	{
		sum = (sum + dp[i]) % 1000000000;
	}

	cout << sum;
}