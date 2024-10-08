#include <iostream>
#include <vector>

using namespace std;


void Bfs(int here)
{
	
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int M, N;
	cin >> M >> N;

	vector<vector<int>> A(N, vector<int> (M, 0));
	vector<int> visited;

	for(int i=0; i < N; i++)
	{

		for(int j=0; j < M; j++)
		{
			int k=0;
			cin >> k;
			A[i][j] = k;


		}
	}


}