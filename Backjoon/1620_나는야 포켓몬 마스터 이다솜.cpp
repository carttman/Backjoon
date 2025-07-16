#include <iostream>
#include <unordered_map>
#include <ctype.h>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_map<int, string> Imap;
	unordered_map<string, int> Smap;

	for (int i = 1; i<=N; i++)
	{
		string s = "";
		cin >> s;
		Imap.insert({i, s});
		Smap.insert({s, i});
	}

	for (int i=0; i<M; i++)
	{
		string name = "";
		cin >> name;
		
		// 숫자이면 
		if (isdigit(name[0]) != 0)
		{
			cout << Imap.at(stoi(name)) << "\n";
		}
		else
		{
			cout << Smap.at(name) << "\n";
		}
	}
	return 0;
}
