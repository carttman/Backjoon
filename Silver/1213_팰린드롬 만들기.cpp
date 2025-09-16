#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int alphabet[26] = {};

	for (const auto& i : s)
		alphabet[i - 'A']++;

	int cnt = 0;
	int pos = 0;
	int end = s.size() - 1;

	for (int i = 0; i < 26; i++)
	{
		char c = i + 'A';

		if (alphabet[i] % 2 != 0)
			cnt++;

		for (int j = 0; j < alphabet[i] / 2; j++)
		{
			s[pos] = c;
			s[end - pos] = c;

			pos++;
		}

		if (alphabet[i] % 2 != 0)
			s[end / 2] = c;
	}

	if (cnt > 1)
		cout << "I'm Sorry Hansoo";
	else
		cout << s;

	return 0;
}