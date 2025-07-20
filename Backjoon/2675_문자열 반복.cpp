#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i=0; i<n; i++)
	{
		int r;
		string s;
		cin >> r >> s;

		string result = "";
		int cnt = 0;
		int curridx = 0;
		for (int j=0; j <s.size() * r; j++)
		{
			if (cnt >= r)
			{
				cnt = 0;
				curridx++;
			}
			result.push_back(s[curridx]);
			cnt++;
		}
		cout << result << "\n";

		result = "";
	}
}