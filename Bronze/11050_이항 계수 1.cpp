#include <iostream>

using namespace std;

int Factorial(int num)
{
	if (num == 0)
	{
		return 1;
	}

	int sum = 1;

	for (int i = num; i >= 1; i--)
	{
		sum *= i;
	}

	return sum;
}

int main()
{

	int N, K;
	cin >> N >> K;


	cout << Factorial(N) / (Factorial(K) * Factorial(N - K));

	return 0;
}