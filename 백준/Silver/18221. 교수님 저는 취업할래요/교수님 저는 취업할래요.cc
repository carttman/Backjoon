#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> arr(n, vector<int>(n, 0));

	int x1, y1, x2, y2;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];

			if (arr[i][j] == 5)
			{
				y1 = i;
				x1 = j;
			}
			else if (arr[i][j] == 2)
			{
				y2 = i;
				x2 = j;
			}
		}

	int temp = pow((x1 - x2), 2) + pow((y1 - y2), 2);
	float temp2 = sqrt(temp);

	bool flag = false;
	if (temp2 >= 5)
		flag = true;

	int cnt = 0;

	if (x1 > x2)
		swap(x1, x2);
	if (y1 > y2)
		swap(y1, y2);

	for (int i = y1; i <= y2; i++)
	{
		for (int j = x1; j <= x2; j++)
		{
			if (arr[i][j] == 1)
				cnt++;
		}
	}

	if (cnt >= 3 && flag)
		cout << 1;
	else
		cout << 0;

	return 0;
}
