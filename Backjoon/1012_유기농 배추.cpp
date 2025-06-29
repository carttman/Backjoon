#include <iostream>
using namespace std;

int testcase, m, n, num, x, y;
int board[51][51];
bool visited[51][51];

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void DFS(int y, int x)
{
    visited[y][x] = true;

    for (int i = 0; i < 4; ++i)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m)
			continue;

        if (board[ny][nx] == 1 && visited[ny][nx] == false)
            DFS(ny, nx);
    }

}

int main()
{
    cin >> testcase;
    while (testcase--)
    {
        fill_n(board[0], 51 * 51, 0);
        fill_n(visited[0], 51 * 51, 0);

        int cnt = 0;
        cin >> m >> n >> num;

        for (int i = 0; i < num; ++i)
        {
            cin >> x >> y;

            board[y][x] = 1;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (board[i][j] == 1 && visited[i][j] == false)
                {
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';

    }

    return 0;
}