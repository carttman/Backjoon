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

	vector<int> A(N+1, 0);
	vector<int> D(N+1, 0);

	for(int i=1; i<=N; i++) // 원본 배열, 합 배열 값 대입
	{
		int K;
		cin >> K;
		A[i] = K;
		D[i] = D[i-1] + A[i];
	}



	int l;
	return 0;
}