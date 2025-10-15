//#include <iostream>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//vector<int> mDist;
//typedef pair<int, int> edge;
//vector<vector<edge>> mList;
//vector<bool> Visited;
//int N, M;
//
//int dijkstra(int start, int end);
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N >> M;
//
//	mDist.resize(N + 1);
//	fill(mDist.begin(), mDist.end(), INT_MAX);
//
//	Visited.resize(N + 1);
//	fill(Visited.begin(), Visited.end(), false);
//
//	mList.resize(N + 1);
//
//	for (int i=0; i<M; i++)
//	{
//		int S, E, Weight;
//
//		cin >> S >> E >> Weight;
//
//		mList[S].push_back(make_pair(E, Weight));
//
//	}
//
//	int start, end;
//	cin >> start >> end;
//
//	int result = dijkstra(start, end);
//	cout << result << "\n";
//
//}
//
//int dijkstra(int start, int end)
//{
//	priority_queue<edge, vector<edge>, greater<edge>> pq;
//
//	// 자기 자신부터 시작
//	pq.push(make_pair(0, start));
//	// 자기 자신과의 거리는 0
//	mDist[start] = 0;
//
//	while (!pq.empty())
//	{	
//		edge nowNode = pq.top();
//
//		pq.pop();
//		
//		int now = nowNode.second;
//
//		if (!Visited[now])
//		{
//			Visited[now] = true;
//
//			for (edge n : mList[now])
//			{	// 
//				if (!Visited[n.first] && mDist[n.first] > mDist[now] + n.second)
//				{
//					mDist[n.first] = mDist[now] + n.second;
//					pq.push(make_pair(mDist[n.first], n.first));
//				}
//			}
//		}
//	}
//
//	return mDist[end];
//}

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> mDist;
typedef pair<int, int> edge;
vector<vector<edge>> mList;
vector<bool> Visited;
vector<int> Prev; // 경로 추적을 위한 배열

int N, M;

int dijkstra(int start, int end);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    mDist.resize(N + 1);
    fill(mDist.begin(), mDist.end(), INT_MAX);

    Visited.resize(N + 1);
    fill(Visited.begin(), Visited.end(), false);

    Prev.resize(N + 1, -1);

    mList.resize(N + 1);

    for (int i = 0; i < M; i++)
    {
        int S, E, Weight;
        cin >> S >> E >> Weight;

        mList[S].push_back(make_pair(E, Weight));
    }

    int start, end;
    cin >> start >> end;

    int result = dijkstra(start, end);

    // 최단 거리 출력
    cout << result << "\n";

    // 경로 복원
    vector<int> path;

    for (int at = end; at != -1; at = Prev[at])
    {
        path.push_back(at);
    }

    reverse(path.begin(), path.end());

    // 경로에 포함된 노드 개수 출력
    cout << path.size() << "\n";

    // 경로 출력
    for (int node : path)
    {
        cout << node << " ";
    }

    cout << "\n";

    return 0;
}
int dijkstra(int start, int end)
{
    priority_queue<edge, vector<edge>, greater<edge>> pq;

    // 자기 자신부터 시작
    pq.push(make_pair(0, start));

    // 자기 자신과의 거리는 0
    mDist[start] = 0;

    while (!pq.empty())
    {
        edge nowNode = pq.top();

        pq.pop();

        int now = nowNode.second;

        if (!Visited[now])
        {
            Visited[now] = true;

            for (edge n : mList[now])
            {
                if (!Visited[n.first] && mDist[n.first] > mDist[now] + n.second)
                {
                    mDist[n.first] = mDist[now] + n.second;

                    pq.push(make_pair(mDist[n.first], n.first));

                    Prev[n.first] = now; // 이전 노드 저장
                }
            }
        }
    }

    return mDist[end];
}
