#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	// 모든 경우의 수 탐색, 1부터 시작
	// 오름차순으로 생성자를 찾기때문에 가장 먼저찾은 생성자가 답이다.
	for (int i = 1; i < N; i++)
	{
		int sum = i;
		int num = i;

		//분해합 만들기
		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}

		// 분해합이 N과 같으면 종료
		if (sum == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;

	return 0;
}
// 10
// 10 + 1 + 0 == 11
// 
