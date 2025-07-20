#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	//정수 N을 주었을 때, n을 1, 2, 3의 합으로 나올 수 있는 수를 모두 구하기

	// x가 3으로 나눠 떨어지면 3으로 나눈다.
	// x가 2으로 나눠 떨어지면 2으로 나눈다.
	// 1을 뺀다.

	// 위와 같은 연산을 사용하여 1을 만든다.
	// 연산을 사용하는 횟수의 최솟값 구하기

	// 재귀로풀면 시간초과남
	// dp로 풀자...

	int n;
	cin >> n;
	int dp[10000001];

	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= n; i++)
	{	// 현재 횟수 = 이전 횟수 + 1 
		dp[i] = dp[i-1] + 1;
		// 나머지 같으면 
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}

		if (i % 2 == 0)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}

	}
	cout << dp[n] << "\n";
	return 0;
}