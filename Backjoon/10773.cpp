// �߸��� ���� �θ� ������ 0�� ��ġ��, ���� �ֱٿ� �� ���� �����
// ��� ���� �޾� ���� �� �� ���� ���� ���϶�

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	cin >> k;

	stack<int> myStack;

	for (int i=0; i<k; i++)
	{
		int n;
		cin >> n;

		if (n != 0)
		{
			myStack.push(n);
		}
		else
		{
			myStack.pop();
		}
	}

	int size = myStack.size();
	int sum = 0;

	for (int i=0; i<size; i++)
	{
		sum += myStack.top();
		myStack.pop();
	}
	cout << sum;
}