#include <iostream>
#include <list>
#include <queue>
#include <vector>

using namespace std;


typedef pair<int, int> edge;
static int V,E,K; // ��尳��, ���� ����, ��� ���
static vector<int> minDistance; // �ִ� �Ÿ� ���� �迭
static vector<bool> visited; // ��� ��� ���� ����
static vector<vector<edge>> minList; // �׷��� ���� ���� ���� ����Ʈ
static priority_queue<edge, vector<edge>, greater<edge>> q; // ������������ ������ �켱���� ť


int main()
{

	cin >> V >> E;
	cin >> K;

	for(int i=0; i<E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
	}



	return 0;
}