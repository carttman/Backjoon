#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> Directions = {{1, 0}, {-1, 0} , {0, -1} , {0, 1}};
vector<pair<int, int>> meongis;

int cleanerTop = -10;
int cleanerBottom = -10;

int main()
{
	int r, c, t;
	cin >> r >> c >> t;

	vector<vector<int>> myMap(r, vector<int>(c, 0));

	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			cin >> myMap[i][j];

			if (myMap[i][j] > 0)
			{
				meongis.push_back({i, j});
			}

			if (myMap[i][j] == -1)
			{
				if (cleanerTop == -10)
				{
					cleanerTop = i;
				}
				else
				{
					cleanerBottom = i;
				}
			}

		}
	}

	while (t--)
	{
		vector<vector<int>> tempMap;
		tempMap = myMap;

		for (int i=0; i < meongis.size(); i++)
		{
			int cRow = meongis[i].first;
			int cColumn = meongis[i].second;

			for (int j=0; j<4; j++)
			{
				int nRow = cRow + Directions[j].first;
				int nColumn = cColumn + Directions[j].second;

				if (nRow < 0 || nRow >= r || nColumn < 0 || nColumn >= c)
					continue;
				if (myMap[nRow][nColumn] == -1)
					continue;

				int amount = tempMap[cRow][cColumn] / 5;

				myMap[nRow][nColumn] += amount;
			
				myMap[cRow][cColumn] -= amount;
				
			}

		}

		vector<vector<int>> cycleTempMap;
		cycleTempMap = myMap;

		//1
		myMap[cleanerTop][1] = 0;
		for (int i=2; i<c; i++)
		{
			myMap[cleanerTop][i] = cycleTempMap[cleanerTop][i-1];
		}
		//2
		for (int i=cleanerTop; i>0; i--)
		{
			myMap[i-1][c-1] = cycleTempMap[i][c-1];
		}
		//3
		for (int i=c-1; i > 0; i--)
		{
			myMap[0][i-1] = cycleTempMap[0][i];
		}
		//4
		for (int i=0; i<cleanerTop; i++)
		{
			myMap[i+1][0] = cycleTempMap[i][0];

			if (i+1 == cleanerTop)
			{
				myMap[cleanerTop][0] = -1;
			}
		}

		//1
		myMap[cleanerBottom][1] = 0;
		for (int i=2; i<c; i++)
		{
			myMap[cleanerBottom][i] = cycleTempMap[cleanerBottom][i - 1];
		}
		//2
		for (int i=cleanerBottom; i<r-1; i++)
		{
			myMap[i+1][c-1] = cycleTempMap[i][c-1];
		}
		//3
		for (int i=c-1; i>0; i--)
		{
			myMap[r-1][i-1] = cycleTempMap[r-1][i];
		}
		//4
		for (int i = r-1; i>cleanerBottom; i--)
		{
			myMap[i - 1][0] = cycleTempMap[i][0];

			if (i - 1 == cleanerBottom)
			{
				myMap[cleanerBottom][0] = -1;
			}
		}

		meongis.clear();

		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (myMap[i][j] > 0)
				{
					meongis.push_back({i, j});
				}
				
			}
			
		}
	}

	int result = 0;

	for (int i=0; i<r; i++)
	{
		for (int j=0; j<c; j++)
		{
			if (myMap[i][j] != -1)
			{
				result += myMap[i][j];
			}
		}
	}

	cout << result;
}