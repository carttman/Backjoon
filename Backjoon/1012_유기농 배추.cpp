#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> A;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 지렁이는 해충을 먹는다.
	// 지렁이는 다른 배추로 이동할 수 있다.
	// 배추들이 모여있는 곳은 지렁이가 한 마리만 있어도 된다.
	// 0은 땅, 1은 배추가 심어져 있는 땅

	// 1. 테스트 케이스
	// 2. 밭의 가로, 세로 길이, 배추 위치 개수
	// 3. 배추의 위치 x, y

	int T;
	cin >> T;
	for (int i=0; i<T; i++)
	{
		int M, N, K;
		cin >> M >> N >> K;

		A.resize(N, vector<int>(M, 0));

		for (int j=0; j<K; j++)
		{
			int x, y;
			cin >> x >> y;

			A[y][x] = 1;
		}
	}

	cout << 9;
}