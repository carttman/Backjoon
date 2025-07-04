#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

bool thirdSort(tuple<int, int, int>& t1, tuple<int, int, int>& t2)
{
	return get<2>(t1) < get<2>(t2);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<tuple<int,int,int>> A(n);

	for (int i = 0; i < n; i++)
	{
		cin >> get<0>(A[i]);

		get<2>(A[i]) = i;
	}

	sort(A.begin(), A.end());

	int cnt = 0;

	for ( int i=0; i < A.size(); i++)
	{
		get<1>(A[i]) = cnt;

		if (i+1 < A.size())
		{

			if (get<0>(A[i]) != get<0>(A[i + 1]))
			{
				cnt++;
			}
		}
	}

	sort(A.begin(), A.end(), thirdSort);

	for (int i=0; i<n; i++)
	{
		cout << get<1>(A[i]) << " ";
	}
}