#include <iostream>

using namespace std;

int main()
{
	// N ų�α׷��� ä���� �Ѵ�
	// ������ 3ų�α׷� 5ų�α׷� �� ������ ����
	// �ִ��� ������ ���Բ� �Ѵ�

	// N ���� ����� ���ٸ� -1

	int N;
	cin >> N;

	int cnt = 0;

	while (N >= 0)
	{
		if (N % 5 == 0)
		{
			cnt += (N / 5);
			cout << cnt << "\n";
			return 0;
		}
		//5�� �ȳ������� 3�� ī�����Ѵ�.
		N -= 3;
		cnt++;

	}
	cout << -1;
}