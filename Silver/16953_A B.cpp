#include <iostream>

using namespace std;

int main()
{
	// ���� A�� B�� �ٲ۴�.
	// 2�� ���Ѵ�.
	// ���� ���� ���� ���� �����ʿ� �߰��Ѵ�

	// 2 4 8 81

	int a, b;

	cin >> a >> b;

	int cnt = 1;

	while (b > a)
	{
		if (b % 10 == 1) // ������ �ڸ��� 1�̶��
		{
			b /= 10;	// ������ �ڸ� ����
		}
		else if (b % 2 == 0)	// ¦�����
		{
			b /= 2;		//�������� ������
		}
		else
		{
			cout << -1;
			return 0;
		}

		cnt++;
	}

	if (a == b)
	{
		cout << cnt;
	}
	else
	{
		cout << -1;
	}

	return 0;
}