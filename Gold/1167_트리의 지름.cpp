#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, int> edge;
vector<vector <edge>> A;
vector<bool> My_Visited;
vector<int> My_Distance; // �Ÿ� ���� �迭

void BFS(int node);


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	A.resize(N+1);

	for(int i=0; i<N; i++)
	{
		int S;
		cin >> S;

		while(true) // 
		{
			int E, V;
			cin >> E;

			if(E == -1)
			{
				break;
			}

			cin >> V;
			A[S].push_back(edge(E, V)); // ������ ���� ���·� �迭�� ����
		}
	}

	My_Distance = vector<int>(N + 1, 0);
	My_Visited = vector<bool>(N+1, false);
	BFS(1); // ������ ������ BFS ����

	int My_Max = 1; // BFS�� 1�� ���������� 1 ����

	for(int i = 2; i <= N; i++)
	{
		if(My_Distance[My_Max] < My_Distance[i]) // ���� �Ÿ��� ū �ε����� ����
		{
			My_Max = i;
		}
	}

	fill(My_Distance.begin(), My_Distance.end(), 0); // �Ÿ�, �湮 �迭 �ʱ�ȭ
	fill(My_Visited.begin(), My_Visited.end(), false); 

	BFS(My_Max); //ū ���� ���������� BFS �ٽ� ����

	sort(My_Distance.begin(), My_Distance.end());

	cout << My_Distance[N] << '\n';

}

void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node); // ť�� ������ ����
	My_Visited[node] = true; // �湮 üũ


	while(!myQueue.empty()) // ť�� �� ������ �ݺ�
	{
		int now_node = myQueue.front();
		myQueue.pop();
		for(const edge &i : A[now_node]) //���� ����� ���� ��� Ž��
		{
			if(!My_Visited[i.first]) //�湮���� �ʾҴٸ�
			{
				My_Visited[i.first] = true; // �湮 üũ �� ť�� ������ ����
				myQueue.push(i.first);
				My_Distance[i.first] = My_Distance[now_node] + i.second; // ���� ����� �Ÿ� + ����ġ�� �湮���� ���� ��� �Ÿ��� ������Ʈ
			}
		}
	}
}
