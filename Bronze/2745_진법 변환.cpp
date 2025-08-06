#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<char, int> mp36 = {
		{'0', 0},{'1', 1},{'2', 2},{'3', 3},{'4', 4},{'5', 5},{'6', 6},
		{'7', 7},{'8', 8},{'9', 9},{'A', 10}, {'B', 11}, {'C', 12}, {'D', 13},
		{'E', 14}, {'F', 15}, {'G', 16},{'H', 17}, {'I', 18}, {'J', 19},{'K', 20},
		{'L', 21}, {'M', 22}, {'N', 23}, {'O', 24},{'P', 25}, {'Q', 26}, {'R', 27},
		{'S', 28}, {'T', 29}, {'U', 30}, {'V', 31}, {'W', 32},{'X', 33}, {'Y', 34}, {'Z', 35} };

	string s;
	cin >> s;

	int b;
	cin >> b;

	int base10 = 0;

	for (int i = 0; i < s.size(); i++)
	{
		base10 += mp36[s[i]] * (pow(b, s.size() - i - 1));
	}

	cout << base10;

	return 0;
}