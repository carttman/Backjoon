#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main()
{
	int num1, num2;
	cin >> num1 >> num2;

	int resultGCD = gcd(num1, num2);
	int resultLCM = lcm(num1, num2);

	cout << resultGCD << "\n";
	cout << resultLCM << "\n";
}