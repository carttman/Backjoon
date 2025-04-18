#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// N x N 의 수가 채워져 있다.
	// (x1, y1) (x2, y2)까지 합을 구하는 프로그램 작성


	int N, M;
	cin >> N, M;

	vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> D(N + 1, vector<int>(N + 1, 0));

	for (int i=1; i<=N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> A[i][j];
		}
	}

	for (int i=1; i<=N; i++)
	{
		for (int j=1; j<=N; j++)
		{	// 현재 합 배열 = 바로 윗 값+ 바로 옆 값 - 중복 값 하나 제거 + 원본 배열의 현재 값
			D[i][j] = D[i][j-1] + D[i-1][j] - D[i-1][j-1] + A[i][j];
		}
	}

	for (int i=0; i < M; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		cout << D[y2][x2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1] << "\n";
	}
}