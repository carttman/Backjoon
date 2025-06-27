#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int score[301] = {0};
	int dp[301] = {0};

	for (int i = 1; i <= N; i++)
	{
		cin >> score[i];
	}

	dp[1] = score[1];
	dp[2] = score[1] + score[2];
	dp[3] = max(score[1] + score[3], score[2] + score[3]);

	for (int i = 4; i <= N; i++)
	{
		dp[i] = max(dp[i-2], dp[i-3] + score[i-1]) + score[i];
	}

	cout << dp[N];
	return 0;
}