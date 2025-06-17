#include <iostream>
#include <queue>
#include <vector>
#include <climits>

using namespace std;

const int MAX = 100001;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> time(MAX, INT_MAX); // 최단 시간 저장
    vector<int> ways(MAX, 0);// 방법의 수 저장

    queue<int> q;

    q.push(n);

    time[n] = 0;
    ways[n] = 1;

    while (!q.empty()) 
    {
        int current = q.front();

        q.pop();

        for (int next : {current - 1, current + 1, current * 2}) 
        {
            if (next < 0 || next >= MAX)
            {
            	continue;
            }

            if (time[next] == INT_MAX) // 처음 방문하는 경우
            { 
                time[next] = time[current] + 1;
                ways[next] = ways[current];

                q.push(next);

            }
        	else if (time[next] == time[current] + 1) // 최단 시간으로 도달하는 경우
            { 
                ways[next] += ways[current];
            }
        }
    }
    cout << time[k] << '\n' << ways[k] << '\n';
    return 0;
}
