#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<int> A(N);

	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	vector<int> dp(N, 1);

	for (int i=0; i<N; i++)
	{
		for (int j=0; j < i; j++)
		{	// 현재 값이 다음 값보다 <
			if (A[j] < A[i])
			{  
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	int maxLength = 0;
	for (int i=0; i<N; i++)
	{
		maxLength = max(maxLength, dp[i]);
	}

	cout << maxLength;
}