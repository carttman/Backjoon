#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// N개의 물건
	// 물건은 W와 V가 있음
	// 최대 K만큼만 가질 수 있음
	// 가질 수 있는 V 의 최댓값
	int N, K;
	cin >> N >> K;

	vector<int> W(N + 1);
	vector<int> V(N + 1);
	vector<int> dp(K + 1, 0);

	for (int i = 1; i <= N; i++)
	{
		cin >> W[i] >> V[i];
	}
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = K; j >= W[i]; j--)
		{
			dp[j] = max(dp[j], dp[j - W[i]] + V[i]);
		}
	}

	cout << dp[K] << endl;
	return 0;
}