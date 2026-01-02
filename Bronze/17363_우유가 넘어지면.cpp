#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
#include <map>
using namespace std;

char Arr[100][100];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	map<char, char> Map;
	Map['.'] = '.';
	Map['O'] = 'O';
	Map['-'] = '|';
	Map['|'] = '-';
	Map['/'] = '\\';
	Map['\\'] = '/';
	Map['^'] = '<';
	Map['<'] = 'v';
	Map['v'] = '>';
	Map['>'] = '^';

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> Arr[i][j];

	for (int i = M - 1; i >= 0; i--)
	{
		for (int j = 0; j < N; j++)
			cout << Map[Arr[j][i]];

		cout << "\n";
	}

	cout << "\n";

	return 0;
}