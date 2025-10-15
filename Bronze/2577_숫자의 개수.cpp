#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	vector<pair<int,int>> A(10, make_pair(0,0));
	for (int i=0; i<A.size(); i++)
	{
		A[i].first = i;
	}

	int a, b, c;
	cin >> a >> b >> c;

	string sum = to_string(a * b * c);

	for (int i=0; i<sum.size(); i++)
	{
		A[sum[i] - '0'].second++;
	}

	for (int i=0; i<A.size(); i++)
	{
		cout << A[i].second << "\n";
	}
}