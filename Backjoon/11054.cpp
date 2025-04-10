#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// 바이토닉 수열이면서
	// 수열의 부분 수열 중 가장 긴 수열의 길이를 구한다.

	// 수열의 각 원소를 기준으로 왼쪽에서부터 증가하는 부분 수열 계산

	// LIS : 최장증가수열 알고리즘

	// Lower Bound : 정렬된 배열에서 찾고자 하는 값 이상이 처음으로 나타나는 위치
	// 처음으로 나타나는 자신보다 큰 값
	// 자신보다 큰 값들중 가장 작은 값

	// 왼쪽에서 증가하는 부분 수열 계산 LIS
	// 오른쪽에서 증가하는 부분 수열 계산 LDS

	// LIS LDS를 합쳐 가장 긴 바이토닉 수열 길이 계산

	//LIS
	// dp[i]를 i번째 원ㅅ소를 끝으로 하는 가장 긴 부분 수열의 길이 정의

	int n;
	cin >> n;

	vector<int> A(n);

	for (int i=0; i<n; i++)
	{
		cin >> A[i];
	}

	vector<int> dp1(n, 1), dp2(n, 1);

	for (int i=0; i<n; i++)
	{
		for (int j=0; j < i; j++)
		{
			if (A[j] < A[i])
			{
				dp1[i] = max(dp1[i], dp1[j] + 1);

			}
		}
	}

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j=n-1; j > i; j--)
		{
			if (A[j] < A[i])
			{
				dp2[i] = max(dp2[i], dp2[j] + 1);
			}
		}
	}

	int maxLength = 0;
	for (int i=0; i<n; i++)
	{
		maxLength = max(maxLength, dp1[i] + dp2[i] - 1);
	}

	cout << maxLength << "\n";

	return 0;
}