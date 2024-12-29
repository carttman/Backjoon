#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> A; // ������ ���� ���� ����Ʈ
vector<bool> My_Visited; // �湮 �迭 
bool Arrive; // ���� Ȯ��

void DFS(int now, int depth);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	Arrive = false;
	cin >> N >> M;

	A.resize(N);
	My_Visited = vector<bool>(N, false);

	for(int i=0; i<M; i++)
	{
		int Start, End;
		cin >> Start >> End;

		A[Start].push_back(End); // ����� �׷����̹Ƿ� ���� ��� ����
		A[End].push_back(Start);
	}

	for(int i=0; i<N; i++) // ��� ��� DFS ����
	{
		DFS(i, 1); 

		if(Arrive) //�̹� �����ߴٸ� ����
		{
			break;
		}
	}

	if(Arrive) 
	{
		cout << 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}

}

void DFS(int now, int depth)
{
	if(depth == 5 || Arrive) // depth�� 5���� �Դٸ� ���� Ȯ���Ѵ�.
	{
		Arrive = true;
		return;
	}
	My_Visited[now] = true; // �湮 üũ

	for(const int &i : A[now]) //�湮 ���� ���� ��� ã�Ƽ� depth �ø��� DFS �����Ѵ�.
	{
		if(!My_Visited[i])
		{
			DFS(i, depth + 1);
		}
	}

	My_Visited[now] = false;
}
