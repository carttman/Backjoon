#include <iostream>

using namespace std;

void Recursion(int n, int cnt)
{
	if (!n)
	{
		for (int i = 0; i < cnt; i++)
			cout << "_";
		cout << "\"����Լ��� ������?\"\n";

		for (int i = 0; i < cnt; i++)
			cout << "_";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";

		for (int i = 0; i < cnt; i++)
			cout << "_";
		cout << "��� �亯�Ͽ���.\n";

		return;
	}

	for (int i=0; i<cnt; i++)
		cout << "_";
	cout << "\"����Լ��� ������?\"\n";

	for (int i = 0; i < cnt; i++)
		cout << "_";
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";

	for (int i = 0; i < cnt; i++)
		cout << "_";
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";

	for (int i = 0; i < cnt; i++)
		 cout << "_";
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

	Recursion(n-1, cnt+4);

	for (int i = 0; i < cnt; i++)
		cout << "_";
	cout << "��� �亯�Ͽ���.\n";

}

int main()
{
	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";

	Recursion(n, 0);
	return 0;
}