#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int y1, x1;
	cin >> y1 >> x1;

	vector<vector<int>> matrix1(y1, vector<int>(x1, 0));

	for (int i=0; i<y1; i++)
	{
		for (int j=0; j<x1; j++)
		{
			cin >> matrix1[i][j];
		}
	}

	int y2, x2;
	cin >> y2 >> x2;

	vector<vector<int>> matrix2(y2, vector<int>(x2, 0));

	for (int i=0; i<y2; i++)
	{
		for (int j=0; j<x2; j++)
		{
			cin >> matrix2[i][j];
		}
	}



	return 0;
}