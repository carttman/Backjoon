#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<char> arr(50);

	string s;
	cin >> s;

	for (int i=0; i<s.size(); i++)
		arr[i] = s[i];

	for (int i=1; i<n; i++)
	{
		cin >> s;

		for (int j=0; j<s.size(); j++)
		{
			if (arr[j] != s[j])
				arr[j] = '?';
		}
	}

	for (int i=0; i<s.size(); i++)
		cout << arr[i];

	return 0;
}