#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> arr(9, vector<int>(9, 0));

	int maxNum = 0;
	pair<int, int> maxidx;
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cin >> arr[i][j];
			if (maxNum <= arr[i][j])
			{
				maxNum = arr[i][j];
				maxidx.first = i + 1;
				maxidx.second = j + 1;
			}
		}
	}

	cout << maxNum << "\n";
	cout << maxidx.first << " " << maxidx.second;

	return 0;
}