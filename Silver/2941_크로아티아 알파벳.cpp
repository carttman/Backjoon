#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string cros[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string s;
	cin >> s;

	int cnt = 0;

	for (int i = 0; i < sizeof(cros) / sizeof(string); i++)
	{
		while (1)
		{
			if (s.find(cros[i]) == string::npos)
				break;

			s.replace(s.find(cros[i]), cros[i].length(), "#");
		}
	}
	cout << s.size();
	return 0;
}