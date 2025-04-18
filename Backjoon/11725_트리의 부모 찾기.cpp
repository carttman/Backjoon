#include <iostream>
#include <vector>

using namespace std;

vector<int> Parent(100001, 0);
vector<bool> Visited(100001, false);
vector<vector<int>> Tree(100001, vector<int>(0));

void dfs(int Node)
{	//�湮 üũ
	Visited[Node] = true;

	// Ʈ�� ��ȸ
	for (int i = 0; i < Tree[Node].size(); i++)
	{	// ���� ��� ����
		int next = Tree[Node][i];

		// ���� ��� �湮 �������� 
		if (!Visited[next])
		{	// �θ��� �迭�� ���� ��� ���� 
			Parent[next] = Node;
			dfs(next);
		}
	}
}

int main()
{
	int N;
	cin >> N;

	//������ ����
	for (int i=0; i<N-1; i++)
	{
		int x, y;
		cin >> x >> y;

		Tree[x].push_back(y);
		Tree[y].push_back(x);
	}

	dfs(1);

	//�� ����� �θ� ��� ���
	for (int i=2; i<=N; i++)
	{
		cout << Parent[i] << "\n";
	}
}