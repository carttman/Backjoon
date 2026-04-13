#include <iostream>

using namespace std;

typedef long long ll;

ll solve(ll a, ll b, ll c)
{
	if (!b)
		return 1;

	ll tmp;
	tmp = solve(a, b / 2, c);
	tmp = tmp * tmp % c;

	if (b % 2 == 0)
		return tmp;

	return tmp * a % c;
}

int main()
{
	ll a, b, c;
	cin >> a >> b >> c;

	cout << solve(a, b, c);

	
	return 0;
}