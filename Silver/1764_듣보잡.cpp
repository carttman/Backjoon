#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	
	multiset<string> A;

	vector<string> B;
	vector<string> C;

	for (int i = 0; i < N + M; i++)
	{
		string s = "";
		cin >> s;

		A.insert(s);
	}

	for (auto it = A.begin(); it != A.end(); it++)
	{		
		B.push_back(*it);
	}

	int cnt = 0;

	for (int i = 0; i < B.size()-1; i++)
	{
		if (B[i] == B[i + 1])
		{
			cnt++;
			C.push_back(B[i]);
		}
	}

	cout << cnt << "\n";
	for (int i = 0; i < C.size(); i++)
	{
		cout << C[i] << "\n";
	}

}