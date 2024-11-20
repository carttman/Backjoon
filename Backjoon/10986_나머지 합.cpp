#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	long cnt = 0;

	vector<long> D(N, 0);
	vector<long> C(M, 0); // 같은 나머지를 가지는 인덱스를 카운트하는 배열

	cin >> D[0];
	for(int i=1; i<N; i++) // 원본 배열, 합 배열 값 대입
	{
		int K;
		cin >> K;
		D[i] = D[i-1] + K;
	}

	for(int i=0; i< N; i++)
	{
		int remainder; 
		remainder = D[i] % M; // 합배열의 나머지 값 계산

		if(remainder == 0) // 나누어 떨어지면 카운트 증가
		{
			cnt++;
		}
		C[remainder]++; // 해당 나머지 값 인덱스의 카운트 증가
	}

	for(int i=0; i<M; i++)
	{
		if(C[i] > 1) // 해당 인덱스의 짝이 하나라도 있다면
		{
			cnt += C[i] * (C[i]-1)/2;
		}
	}
	cout << cnt;
	return 0;
}