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

	// �ִ� �Ÿ� ����Ʈ �ʱ�ȭ
	for (int i=1; i<=N; i++)
	{
		for (int j=1; j<= N; j++)
		{
			if (i == j)
			{	//�ڱ� �ڽŰ��� �Ÿ��� 0���� �ʱ�ȭ
				mdistance[i][j] = 0;
			}
			/*else
			{
				mdistance[i][j] = 10000001;
			}*/
		}
	}

	// �ִ� �Ÿ� ����Ʈ ������ ����
	for (int i=0; i<M; i++)
	{
		int s, e, v;
		cin >> s >> e >> v;

		// �ߺ��� �뼱�� ���� ��, �� ���� ������ ������Ʈ
		if (mdistance[s][e] > v)
		{	
			mdistance[s][e] = v;
		}
	}

	// k : ������
	// ��� ���� ��ȯ�Ͽ� �ִܰ�� �迭 ������Ʈ
	for (int K=1; K <= N; K++)
	{
		for (int S=1; S <= N; S++)
		{
			for (int E=1; E <= N; E++)
			{	//���~�� ��뺸�� (���~������ + ������~��)�� ����� �� �۴ٸ� ������Ʈ
				if (mdistance[S][E] > mdistance[S][K] + mdistance[K][E])
				{	
					mdistance[S][E] = mdistance[S][K] + mdistance[K][E];
				}
			}
		}
	}

	//������Ʈ�� �ִ� ��� ��� ���
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