#include <iostream>
#include <queue>

using namespace std;

struct compare
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b)) //������ ���ٸ� ���� �켱 ����
		{
			return a > b;
		}
		else 
		{
			return abs(a) > abs(b); // ���� �������� ����
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	priority_queue<int, vector<int>, compare> MyQueue;

	for (int i=0; i<N; i++)
	{
		int X;
		cin >> X;

		if (X == 0) 
		{
			if (MyQueue.empty()) // ��������� 0 ���
			{
				cout << "0" << '\n';
			}
			else // ������ �ּ��� �� ���
			{
				cout << MyQueue.top() << '\n'; // ���� ������ ����ϰ� �� ����
				MyQueue.pop();
			}
		}
		else
		{
			MyQueue.push(X);
		}
	}
}