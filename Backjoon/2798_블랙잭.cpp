#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> A(N);

	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	int sum = 0;
	int total = 0;
	// N장중 3장 고른다.
	for (int i=0; i<A.size(); i++)
	{
		for (int j=i + 1; j<A.size(); j++)
		{
			for (int k=j + 1; k<A.size(); k++)
			{
				sum = A[i] + A[j] + A[k];
				if (sum <= M)
				{
					if (total < sum)
					{
						total = sum;
					}
				}
			}
		}
	}

	cout << total;
}