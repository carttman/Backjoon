#include <iostream>

using namespace std;

long long arr[101] = {0, 1, 1, };

long long recursion(int n)
{
	if (n < 3)
	{
		return arr[n];
	}
	else if (arr[n] == 0)
	{
		arr[n] = recursion(n - 2) + recursion(n - 3);
	}

	return arr[n];
}

int main()
{
	int t, n;

	cin >> t;

	for (int i=0; i<t; i++)
	{
		cin >> n;
		cout << recursion(n) << "\n";
	}
}