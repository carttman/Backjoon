#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> mymap(101, vector<int>(101, 0));

	int cnt = 0;
	for (int i = 0; i < 4; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = y1; j < y2; j++)
		{
			for (int k = x1; k < x2; k++)
			{
				if (!mymap[j][k])
				{
					mymap[j][k] = 1;
					cnt++;
				}
			}
		}
	}

	cout << cnt;
	return 0;
}