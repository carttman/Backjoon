#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> A;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �����̴� ������ �Դ´�.
	// �����̴� �ٸ� ���߷� �̵��� �� �ִ�.
	// ���ߵ��� ���ִ� ���� �����̰� �� ������ �־ �ȴ�.
	// 0�� ��, 1�� ���߰� �ɾ��� �ִ� ��

	// 1. �׽�Ʈ ���̽�
	// 2. ���� ����, ���� ����, ���� ��ġ ����
	// 3. ������ ��ġ x, y

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