#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int t;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		int a, b;
		cin >> a >> b;
		int result = a * b / gcd(a, b);
		cout << result << '\n';
	}
}

int gcd(int a, int b)// 10, 6 // 6, 4 // 4, 2 // 2, 0
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b); // 6, 4 // 4, 2 // 2, 0
	}

}
