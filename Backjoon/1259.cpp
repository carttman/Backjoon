#include <iostream>
#include <string>

using namespace std;

int main()
{
	while (1)
	{
		
		int n;
		cin >> n;

		if (n == 0)
		{
			return 0;
		}

		string s = to_string(n);
		string rs = "";

		for (int i=s.size() - 1; i >= 0; i--)
		{
			rs.push_back(s[i]);
		}

		if (s == rs)
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << "no" << "\n";
		}
	}
}