#include <iostream>
#include <queue>

using namespace std;

int main()
{
	// N������ ���� �̷�� �ɾ��ִ�.
	// ������� K��° ��� ����
	// N���� ����� ��� ���ŵ� ������ ����Ѵ�.
	queue<int> q;

	int N, K;

	cin >> N >> K;

	for (int i=1; i<=N; i++)
	{
		q.push(i);
	}

	cout << "<";
	while (q.size() != 0)
	{
		for (int i=0; i<K-1; i++)
		{
			int temp = q.front();

			q.pop();

			q.push(temp);
		}

		if (q.size() != 1)
		{
			cout << q.front() << ", ";
		}
		else
		{
			cout << q.front();
		}

		q.pop();
	}
	cout << ">";
}