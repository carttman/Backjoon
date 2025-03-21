#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, string> map;

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;

		map.insert(make_pair(s1, s2));
		//map.insert({s1, s2});
	}

	for (int i = 0; i < M; i++)
	{
		string s;
		cin >> s;

		cout << map[s] << "\n";
	}
	
	return 0;
}