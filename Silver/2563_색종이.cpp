#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> arr(101, vector<int>(101, 0));

	for (int i = 0; i < n; i++)
	{
		int c, r;
		cin >> c >> r;
		
		for (int j = r; j <r + 10; j++)
		{
			for (int k = c; k < c + 10; k++)
			{
				arr[j][k] = 1;
			}
		}
	}

	int cnt = 0;

	for (int i = 1; i < 101; i++)
	{
		for (int j = 1; j < 101; j++)
		{
			if (arr[i][j])
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}