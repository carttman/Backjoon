#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int r, c;
	cin >> r >> c;
	string str[2 * r];

	for (int i = 0; i < r; i++)
		cin >> str[i];

	for (int i = 0; i < r; i++)
	{
		for (int j = c - 1; j >= 0; j--)
			str[i] += str[i][j];
	}

	for (int i = 0; i < r; i++)
		str[2 * r - 1 - i] = str[i];

	int y, x;
	cin >> y >> x;

	if (str[y - 1][x - 1] == '#')
		str[y - 1][x - 1] = '.';
	else
		str[y - 1][x - 1] = '#';

	for (int i = 0; i < 2 * r; i++)
		cout << str[i] << "\n";
	return 0;
}