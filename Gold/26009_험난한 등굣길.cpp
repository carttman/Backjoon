#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> mymap(n, vector<int>(m, 0));
	vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
	
	int k;
	cin >> k;

	for (int i=0; i<k; i++) 
	{
		int r, c, d;
		cin >> r >> c >> d;

		/*for (int j=0; j<n; j++)
		{
			for (int k=0; k<m; k++)
			{
				if (abs((r-1) - j) + abs((c-1) - k) == d)
				{
					mymap[j][k] = -1;
					
				}
			}
		}*/
		int row = r-1;
		int col = c-1;

		//맨 왼쪽
		//if (col - d >= 0)
		//{
		//	mymap[row][col-d] = -1;
		//}
		//else
		//{
		//	mymap[row][0] = -1;
		//}
		//// 맨 오른쪽
		//if (col + d < m)
		//{
		//	mymap[row][col+d] = -1;
		//}
		//else
		//{
		//	mymap[row][m-1];
		//}




		for (int k = col-d; k <= col+d; k++)
		{
			

			mymap[row+k][k] = -1;
			mymap[row-k][k] = -1;
		}
		
	}

	

	queue<pair<int, int>> q;
	q.emplace(0, 0);

	while (!q.empty())
	{
		auto curr_node = q.front();
		int c_row = curr_node.first;
		int c_col = curr_node.second;

		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int n_row = c_row + dir[i].first;
			int n_col = c_col + dir[i].second;

			if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m)
			{
				if (mymap[n_row][n_col] >= 0)
				{
					if (!mymap[n_row][n_col])
					{
						mymap[n_row][n_col] = mymap[c_row][c_col] + 1;
						q.emplace(n_row, n_col);
					}
				}
			}
		}
	}

	if (mymap[n-1][m-1])
	{
		cout << "YES" << "\n";
		cout << mymap[n-1][m-1] << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}

	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cout << mymap[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}