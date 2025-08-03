#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	vector<pair<int, char>> arr(26, {0,0});

	for (int i=0; i<arr.size(); i++)
	{
		arr[i].second = 'A' + i;
	}


	for (int i=0; i<s.size(); i++)
	{
		s[i] = toupper(s[i]);

		arr[s[i] - 'A'].first += 1;
	}

	sort(arr.begin(), arr.end());

	if (arr[25].first == arr[24].first)
	{
		cout << "?";
	}
	else
	{
		cout << arr[25].second;
	}
}