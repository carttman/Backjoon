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
//	// �ڱ� �ڽź��� ����
//	pq.push(make_pair(0, start));
//	// �ڱ� �ڽŰ��� �Ÿ��� 0
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
vector<int> Prev; // ��� ������ ���� �迭

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

    // �ִ� �Ÿ� ���
    cout << result << "\n";

    // ��� ����
    vector<int> path;

    for (int at = end; at != -1; at = Prev[at])
    {
        path.push_back(at);
    }

    reverse(path.begin(), path.end());

    // ��ο� ���Ե� ��� ���� ���
    cout << path.size() << "\n";

    // ��� ���
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

    // �ڱ� �ڽź��� ����
    pq.push(make_pair(0, start));

    // �ڱ� �ڽŰ��� �Ÿ��� 0
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

                    Prev[n.first] = now; // ���� ��� ����
                }
            }
        }
    }

    return mDist[end];
}
