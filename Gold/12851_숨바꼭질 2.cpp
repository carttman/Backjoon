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

    vector<int> time(MAX, INT_MAX); // �ִ� �ð� ����
    vector<int> ways(MAX, 0);// ����� �� ����

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

            if (time[next] == INT_MAX) // ó�� �湮�ϴ� ���
            { 
                time[next] = time[current] + 1;
                ways[next] = ways[current];

                q.push(next);

            }
        	else if (time[next] == time[current] + 1) // �ִ� �ð����� �����ϴ� ���
            { 
                ways[next] += ways[current];
            }
        }
    }
    cout << time[k] << '\n' << ways[k] << '\n';
    return 0;
}
