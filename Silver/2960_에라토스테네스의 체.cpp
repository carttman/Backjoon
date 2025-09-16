#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> prime(n+1, 1);

	int cnt = 0;

	for (int i=2; i<=n; i++)
	{
		if (cnt == k)
			break;

		for (int j=i; j<=n; j+=i)
		{
			if (prime[j] != 0)
			{
				prime[j] = 0;
				cnt++;
			}

			if (cnt == k)
			{
				cout << j;
				break;
			}
		}
	}

	return 0;
}