#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int numbers[10] = {};

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] - '0' == 9)
			numbers[6]++;
		else 
			numbers[s[i] - '0']++;
	}

	numbers[6] = (numbers[6] + 1) / 2;

	int maxnum = 0;
	for (const auto& i : numbers)
	{
		maxnum = max(maxnum, i);
	}

	cout << maxnum;

	return 0;
}