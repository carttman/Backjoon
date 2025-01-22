#include <iostream>
#include <vector>
#include <limits.h>
#include <tuple>

using namespace std;

typedef tuple<int, int, int> edge;
int N, M;
vector<long> mdistance;
vector<edge> edges;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	mdistance.resize(N + 1);
	fill(mdistance.begin(), mdistance.end(), LONG_MAX);

	for (int i=0; i<M; i++)
	{
		int start, end, time;
		cin >> start >> end >> time;
		edges.push_back(make_tuple(start, end, time));
	}

	mdistance[1] = 0;

	for (int i=1; i<N; i++)
	{
		for (int j=0; j<M; j++)
		{
			edge m_edge = edges[j];

			int start = get<0>(m_edge);
			int end = get<1>(m_edge);
			int time = get<2>(m_edge);

			if (mdistance[start] != LONG_MAX && mdistance[end] > mdistance[start] + time)
			{
				mdistance[end] = mdistance[start] + time;
			}
		}
	}

	bool mCycle = false;

	for (int i=0; i< M; i++)
	{
		edge m_edge = edges[i];
		int start = get<0>(m_edge);
		int end = get<1>(m_edge);
		int time = get<2>(m_edge);

		if (mdistance[start] != LONG_MAX && mdistance[end] > mdistance[start] + time)
		{
			mCycle = true;
		}
	}

	if (!mCycle)
	{
		for (int i=2; i<=N; i++)
		{
			if (mdistance[i] == LONG_MAX)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << mdistance[i] << "\n";
			}
		}
	}
	else
	{
		cout << -1 << "\n";
	}
}