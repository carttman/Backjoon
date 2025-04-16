#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	//int N, M;
	//cin >> N >> M;

	//vector<vector<int>> A(N+1, vector<int>(N+1, 0)); //���� �迭
	//vector<vector<int>> D(N+1, vector<int>(N+1, 0)); // �� �迭
	//
	//for(int i=1; i<= N; i++) // ���� �迭 �� ����
	//{
	//	for(int j=1; j<= N; j++)
	//	{
	//		int K;
	//		cin >> K; 
	//		A[i][j] = K;
	//	}
	//}
	//
	//for(int i=1; i<= N; i++) // �� �迭 �� ����
	//{
	//	for(int j=1; j<= N; j++)
	//	{
	//		D[i][j] = D[i][j-1] + D[i-1][j] - D[i-1][j-1] + A[i][j];
	//	}
	//}

	//for(int i=0; i<M; i++)	//��� �� ���
	//{
	//	int x1, y1, x2, y2;
	//	cin >> x1 >> y1 >> x2 >> y2;
	//	cout << D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1] << "\n";
	//}

	//return 0;


	// N x N �� ���� ä���� �ִ�.
	// (x1, y1) (x2, y2)���� ���� ���ϴ� ���α׷� �ۼ�


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
		{	// ���� �� �迭 = �ٷ� �� ��+ �ٷ� �� �� - �ߺ� �� �ϳ� ���� + ���� �迭�� ���� ��
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