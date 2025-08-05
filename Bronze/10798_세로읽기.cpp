#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<char>> arr(5, vector<char>(15, -1));

	for (int i=0; i<5; i++)
	{
		string s;
		cin >> s;

		for (int j=0; j<s.size(); j++)
		{
			arr[i][j] = s[j];
		}
	}

	for (int i=0; i<15; i++)
	{
		for (int j=0; j<5; j++)
		{
			if (arr[j][i] >= 0)
			{
				cout << arr[j][i];
			}
		}
	}
}