#include <iostream>

using namespace std;

long long recursion(int n)
{
	if (!n || n == 1)
		return 1;

	return n * recursion(n-1);
}

int main()
{
	int n;
	cin >> n;

	cout << recursion(n);
}