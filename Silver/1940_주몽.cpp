#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int count = 0;

	cin >> N;
	cin >> M;

	vector<int> A(N, 0);

	for (int i=0; i<N; i++)
	{
		int a;
		cin >> a;
		A[i] = a;
	}
	sort(A.begin(), A.end());

	
	int i = 0;
	int j = N-1;

	while (i < j)
	{
		if (A[i] + A[j] == M)
		{
			count++;
			i++;
			j--;

		}
		else if (A[i] + A[j] < M)
		{
			i++;
		}
		else if (A[i] + A[j] > M)
		{
			j--;
		}
	}

	cout << count;
}