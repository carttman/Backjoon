#include <iostream>

using namespace std;

int main()
{
	ios:: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	while (1)
	{
		int a, b;
		cin >> a >> b;

		if (!a && !b)
			break;

		if (b % a == 0)
		{
			cout << "factor" << "\n";
		}
		else if (a % b == 0)
		{
			cout << "multiple" << "\n";
		}
		else
		{
			cout << "neither" << "\n";
		}
	}

	return 0;
}