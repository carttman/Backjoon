#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	set<int> A;

	for (int i=0; i < N; i++)
	{
		int n;
		cin >> n;
		A.insert(n);
	}

	auto it = A.begin();
	auto it2 = A.rbegin();
	cout <<  *it << " " << *it2;
}