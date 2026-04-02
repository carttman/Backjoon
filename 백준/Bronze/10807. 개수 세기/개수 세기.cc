#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> mp;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;

		mp[tmp]++;
	}

	int v;
	cin >> v;
	
	if (mp.find(v) != mp.end())
		cout << mp[v];
	else
		cout << 0;
	return 0;
}
