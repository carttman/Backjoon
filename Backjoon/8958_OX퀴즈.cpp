#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		string s;
		cin >> s;

		int cnt = 0;
		int sum = 0;

		for (int j=0; j < s.size(); j++)
		{
			if (s[j] == 'O')
			{
				cnt++;
				sum += cnt;
			}
			else
			{
				cnt = 0;
			}
		}
		cout << sum << "\n";
	}
}