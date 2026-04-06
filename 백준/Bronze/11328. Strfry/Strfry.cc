#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n--)
	{
		int alpha1[26] = {};
		int alpha2[26] = {};

		string s1, s2;
		cin >> s1 >> s2;

		for (int i = 0; i < s1.size(); i++)
			alpha1[s1[i] - 'a']++;
		
		for (int i = 0; i < s2.size(); i++)
			alpha2[s2[i] - 'a']++;
		
		bool b = false;
		for (int i = 0; i < 26; i++)
		{
			if (alpha1[i] != alpha2[i])
			{
				b = true;
				break;
			}
		}

		if (!b)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}


	return 0;
}
