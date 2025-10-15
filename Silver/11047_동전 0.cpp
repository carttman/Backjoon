#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	vector<int> A(N, 0);

	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int cnt = 0;

	for (int i=N-1; i>= 0; i--) // 내림차순으로 탐색
	{
		if (A[i] <= K) // 현재 금액이 K금액보다 작거나 같다면
		{
			cnt += (K / A[i]); // 현재 금액의 동전 개수를 카운팅한다.
			K = K % A[i]; // K에서 현재 금액을 빼고 남은 금액으로 업데이트한다. 
		}
	}
	cout << cnt;
}