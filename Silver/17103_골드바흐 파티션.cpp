#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	const int maxnum = 1000001;

	bool prime[maxnum] = {};

	fill(prime, prime + maxnum, true);

	prime[1] = false;

	for (int i = 2; i < maxnum; i++)
	{
		for (int k = i * 2; k < maxnum; k = k + i)
		{
			prime[k] = false;
		}
	}

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int result = 0;

		for (int i = 2; i < (n / 2) + 1; i++)
		{
			if(prime[i] && prime[n-i])
				result++;
		}

		cout << result << "\n";
	}

	return 0;
}