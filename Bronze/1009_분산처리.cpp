#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)
	{
		int a, b, result(1);
		cin >> a >> b;

		for (int i=0; i<b; i++)
		{
			result = (result * a) % 10;
		}

		if (!result)
		{
			cout << 10 << "\n";
		}
		else
		{
			cout << result << "\n";
		}
	}

	return 0;
}