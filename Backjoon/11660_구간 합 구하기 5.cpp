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

	vector<vector<int>> A(N+1, vector<int> (N+1, 0)); //원본 배열
	vector<vector<int>> D(N+1, vector<int>(N+1, 0)); // 합 배열
	
	for(int i=1; i<= N; i++) // 원본 배열 값 대입
	{
		for(int j=1; j<= N; j++)
		{
			int K;
			cin >> K; 
			A[i][j] = K;
		}
	}
	
	for(int i=1; i<= N; i++) // 합 배열 값 대입
	{
		for(int j=1; j<= N; j++)
		{
			D[i][j] = D[i][j-1] + D[i-1][j] - D[i-1][j-1] + A[i][j];
		}
	}

	for(int i=0; i<M; i++)	//계산 및 출력
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1] << "\n";
	}

	return 0;	
}