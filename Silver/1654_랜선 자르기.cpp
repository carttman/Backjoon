#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;

	cin >> k >> n;

	vector<long long> a(k);

	long long maxLan = 0;
	for (int i=0; i<k; i++)
	{
		cin >> a[i];
		maxLan = max(maxLan, a[i]);
	}

	long long ans = -1;
	long long left = 1;
	long long right = maxLan;

	while(left <= right)
	{
		long long middle = (left + right) / 2;

		// 중간 길이 구한다
		long long sum = 0;
		// 중간 길이 기준으로 개수 센다
		for (int i=0; i<a.size(); i++)
		{
			sum += a[i] / middle;
		}

		// 합이 타겟보다 작으면
		if (sum < n)
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;

			ans = max(ans, middle);
		}

	}
	cout << ans;
	return 0;
}
	//=== 시간초과 난 코드
	//int maxLan = 0;
	//
	//for (int i=1; i<= maxLann; i++)
	//{
	//	int sum = 0;
	//	for (int j=0; j<k; j++)
	//	{
	//		sum += a[j]/i;
	//	}

	//	if (sum == n)
	//	{
	//		maxLan = i;
	//	}

	//}