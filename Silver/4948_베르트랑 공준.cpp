#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (1)
	{
		int n;
		cin >> n;

		if (!n)
			break;

		int cnt = 0;

		for (int i = n + 1; i <= 2 * n; i++)
		{
			int rt = sqrt(i);

			if (rt == 1 && i != 1)
			{
				cnt++;
				continue;
			}

			if (i % 2)
			{
				for (int j=2; j<=rt; j++)
				{
					if (!(i%j))
						break;

					if (j == rt)
						cnt++;
				}
			}
		}

		cout << cnt << "\n";
	}

	return 0;
}