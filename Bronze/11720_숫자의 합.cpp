#include <iostream>

using namespace std;

int main()
{
	int n;
	string numbers;
	cin >> n;
	cin >> numbers;

	int sum = 0;
	// number 의 크기까지 반복
	for (int i = 0; i < numbers.length(); i++)
	{	// 넘버의 i번째
		// '5' - '0' -> 53 - 48 = 5
		sum += numbers[i] - '0';
	}
	cout << sum << endl;

	return 0;
}