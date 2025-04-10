#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// ������� �����̸鼭
	// ������ �κ� ���� �� ���� �� ������ ���̸� ���Ѵ�.

	// ������ �� ���Ҹ� �������� ���ʿ������� �����ϴ� �κ� ���� ���

	// LIS : ������������ �˰���

	// Lower Bound : ���ĵ� �迭���� ã���� �ϴ� �� �̻��� ó������ ��Ÿ���� ��ġ
	// ó������ ��Ÿ���� �ڽź��� ū ��
	// �ڽź��� ū ������ ���� ���� ��

	// ���ʿ��� �����ϴ� �κ� ���� ��� LIS
	// �����ʿ��� �����ϴ� �κ� ���� ��� LDS

	// LIS LDS�� ���� ���� �� ������� ���� ���� ���

	//LIS
	// dp[i]�� i��° �����Ҹ� ������ �ϴ� ���� �� �κ� ������ ���� ����

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