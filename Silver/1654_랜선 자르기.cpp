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

	int target = n;
	long long left = 1;
	long long right = maxLan;
	long long answer = 0;

	int loopcnt = 0;
	while(1)
	//while(left <= right)
	{
		loopcnt++;
		// 중간 길이 구한다
		long long middle = (left + right) / 2;

		long long sum = 0;
		// 중간 길이 기준으로 개수 센다
		for (int i=0; i<a.size(); i++)
		{
			sum += a[i] / middle;
		}

		// 합이 타겟보다 작으면
		if (sum < target)
		{
			right = middle - 1;
		}
		else if (sum > target)
		{
			left = middle + 1;
		}
		if (sum == target)
		{
			if (answer == middle)
			{
				cout << answer;
				break;
			}
			answer = middle;
		}

		//middle = (left + right) / 2;
	}
	//cout << middle << "loop : " << loopcnt <<"\n";

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