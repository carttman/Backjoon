#include <iostream>

using namespace std;

int GCD (long long a, long long b)
{
	if (b==0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	long long a, b, gcd;
	cin >> a >> b;

	gcd = GCD(a,b);

	cout << a * b / gcd;

	return 0;
}