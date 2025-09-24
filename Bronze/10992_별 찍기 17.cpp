#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			cout << " ";
		}

		cout << "*";
		for (int j = 1; j < i * 2; j++)
		{
			cout << " ";
		}
		if (i != 0)
			cout << "*";

		cout << '\n';
	}

	for (int i = 1; i < 2 * n; i++)
	{
		cout << "*";
	}

	return 0;
}