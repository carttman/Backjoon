#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;
	cin >> N;

	// ��� ����� �� Ž��, 1���� ����
	// ������������ �����ڸ� ã�⶧���� ���� ����ã�� �����ڰ� ���̴�.
	for (int i = 1; i < N; i++)
	{
		int sum = i;
		int num = i;

		//������ �����
		while (num != 0)
		{
			sum += num % 10;
			num /= 10;
		}

		// �������� N�� ������ ����
		if (sum == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;

	return 0;
}
// 10
// 10 + 1 + 0 == 11
// 
