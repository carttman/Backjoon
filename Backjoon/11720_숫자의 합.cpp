#include <iostream>

using namespace std;

int main()
{
	int n;
	string numbers;
	cin >> n;
	cin >> numbers;

	int sum = 0;
	// number �� ũ����� �ݺ�
	for (int i = 0; i < numbers.length(); i++)
	{	// �ѹ��� i��°
		// '5' - '0' -> 53 - 48 = 5
		sum += numbers[i] - '0';
	}
	cout << sum << endl;

	return 0;
}