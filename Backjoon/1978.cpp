#include <iostream>

using namespace std;

int main()
{
	int N, result = 0;
	int temp, cnt = 0;

	cin >> N;

	for (int i=0; i<N; i++)
	{
		cin >> temp;

		for (int j=1; j<=temp; j++)
		{	// 
			if (temp % j == 0)
			{
				cnt++;
			}
		}
		// 소수면 결과에 추가
		if (cnt == 2)
		{
			result++;
		}

		cnt = 0;

	}

	cout << result << "\n";
}