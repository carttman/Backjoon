#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int i = 1;

	// �� ��° �밢���� �ִ��� Ž��
	// ���� �밢���� ������ŭ ����
	while (n > i)
	{
		n -= i;
		i++;
	}

	if (i % 2 != 0)
	{
		cout << i + 1 - n << '/' << n << "\n";
	}
	else
	{
		cout << n << '/' << i + 1 - n << "\n";
	}

	return 0;
}