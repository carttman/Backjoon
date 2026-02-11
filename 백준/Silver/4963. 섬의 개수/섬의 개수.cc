#include <bits/stdc++.h>

using namespace std;

const int MN = 51;

int a[MN][MN]; 
bool vst[MN][MN]; 

int dx[8] = { 1, 0, 0, -1, 1, -1, 1, -1 }; 
int dy[8] = { 0, 1, -1, 0, 1, 1, -1, -1 };

int w, h;

void dfs(int row, int col)
{
    vst[row][col] = true;

    for (int d = 0; d < 8; d++) 
    { 
        int nRow = row + dx[d]; 
        int nCol = col + dy[d];

        if (0 <= nRow && nRow < h && 0 <= nCol && nCol < w) 
            if (!vst[nRow][nCol] && a[nRow][nCol]) 
                dfs(nRow, nCol); 
    }
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    while (true) 
    {
        cin >> w >> h;

        if (w == 0 && h == 0) 
			break;

        memset(a, 0, sizeof(a)); 
        memset(vst, 0, sizeof(vst));

        for (int i = 0; i < h; i++) 
            for (int j = 0; j < w; j++) 
                cin >> a[i][j]; 

        int cnt = 0;
        for (int i = 0; i < h; i++) 
        {
            for (int j = 0; j < w; j++) 
            {
                if (a[i][j] && !vst[i][j]) 
                { 
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

	return 0;
}