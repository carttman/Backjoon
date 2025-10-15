#include <iostream>

using namespace std;

int Re(int floor, int ho)
{
	int sum = 0;
	
	if (floor == 0)
	{
		return ho;
	}
	else if (ho == 1)
	{
		return 1;
	}
	else
	{	// k-1�� nȣ + k�� n-1ȣ
		return Re(floor - 1, ho) + Re(floor, ho-1);
	}
}

int main()
{
	// a���� bȣ�� �����
	// a-1���� 1ȣ���� bȣ���� ������� ���� ��
	// �־����� ���� ���� k�� n�� ���� k���� nȣ���� �� �� ����ִ���
	// ����Ʈ�� 0������ ���� / �� ���� 1ȣ����, 0���� iȣ���� i���� ���.
	int t;

	cin >> t;

	for (int i=0; i<t; i++)
	{
		int k, n;
		cin >> k >> n;

		cout << Re(k, n) << "\n";
	}

}