#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int cnt = 0;
	string answer;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'X')
			cnt++;

		if (s[i] == '.')
		{
			if (cnt % 2 != 0)
				break;

			answer += '.';
			cnt = 0;
		}

		if (cnt == 4)
		{
			answer += "AAAA";
			cnt = 0;
		}
		else if (cnt == 2 && s[i + 1] != 'X')
		{
			answer += "BB";
			cnt = 0;
		}
	}

	if (cnt % 2 == 1)
		cout << -1;
	else
		cout << answer;

	return 0;
}