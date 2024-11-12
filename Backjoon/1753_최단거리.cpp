#include <iostream>
#include <list>
#include <queue>
#include <vector>

using namespace std;


typedef pair<int, int> edge;
static int V,E,K; // 노드개수, 에지 개수, 출발 노드
static vector<int> minDistance; // 최단 거리 저장 배열
static vector<bool> visited; // 노드 사용 여부 저장
static vector<vector<edge>> minList; // 그래프 정보 저장 인접 리스트
static priority_queue<edge, vector<edge>, greater<edge>> q; // 오름차순으로 정렬한 우선순위 큐


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