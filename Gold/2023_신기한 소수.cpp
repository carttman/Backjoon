#include <iostream>

using namespace std;

void DFS(int number, int jaritsu);
bool Check(int number);
int N;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	DFS(2, 1); // ù ��° �ڸ��� dfs ���� ����
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

}

void DFS(int number, int jaritsu)
{
	if (jaritsu == N) // �ش� �ڸ������� �Դٸ� �Ҽ� üũ�ϰ� ��� 
	{
		if (Check(number))
		{
			cout << number << "\n";
		}
		return;
	}

	for (int i=1; i<10; i++)
	{
		if (i % 2 == 0) // �Ҽ��� for�� ����
		{
			continue;
		}
		if (Check(number*10 + i)) // n�� �ڸ��� ���� �Ҽ����� üũ
		{
			DFS(number * 10 + i, jaritsu + 1); // �Ҽ��� DFS ����
		}
	}
}

bool Check(int number) // true�� �Ҽ�, false�� �Ҽ� �ƴ�
{
	for (int i=2; i<=number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

