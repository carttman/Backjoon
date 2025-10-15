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

	vector<vector<int>> mdistance(N + 1, vector<int>(N + 1, 10000001));

	// 최단 거리 리스트 초기화
	for (int i=1; i<=N; i++)
	{
		for (int j=1; j<= N; j++)
		{
			if (i == j)
			{	//자기 자신과의 거리는 0으로 초기화
				mdistance[i][j] = 0;
			}
			/*else
			{
				mdistance[i][j] = 10000001;
			}*/
		}
	}

	// 최단 거리 리스트 데이터 저장
	for (int i=0; i<M; i++)
	{
		int s, e, v;
		cin >> s >> e >> v;

		// 중복된 노선이 있을 때, 더 작은 값으로 업데이트
		if (mdistance[s][e] > v)
		{	
			mdistance[s][e] = v;
		}
	}

	// k : 경유지
	// 모든 쌍을 순환하여 최단경로 배열 업데이트
	for (int K=1; K <= N; K++)
	{
		for (int S=1; S <= N; S++)
		{
			for (int E=1; E <= N; E++)
			{	//출발~끝 비용보다 (출발~경유지 + 경유지~끝)의 비용이 더 작다면 업데이트
				if (mdistance[S][E] > mdistance[S][K] + mdistance[K][E])
				{	
					mdistance[S][E] = mdistance[S][K] + mdistance[K][E];
				}
			}
		}
	}

	//업데이트된 최단 경로 행렬 출력
	for (int i=1; i <= N; i++)
	{
		for (int j=1; j <= N; j++)
		{
			if (mdistance[i][j] == 10000001)
			{
				cout << "0 ";
			}
			else
			{
				cout << mdistance[i][j] << " ";
			}
		}
		cout << "\n";
	}
}