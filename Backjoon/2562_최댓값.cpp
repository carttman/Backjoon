#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<pair<int, int>> A;

	for (int i=0; i<9; i++)
	{
		int n;
		cin >> n;
		A.push_back(make_pair(n, i+1));
	}

	sort(A.begin(), A.end());

	cout << A[8].first << "\n";
	cout << A[8].second;
}