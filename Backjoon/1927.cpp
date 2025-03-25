#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �迭�� �ڿ��� x�� �ִ´�.
	// ���� ���� ���� ����ϰ� �迭���� �����Ѵ�.

	int N;
	cin >> N;

	priority_queue<int, vector<int>, greater<int>> A;
	for (int i=0; i<N; i++)
	{
		int x;
		cin >> x;

		if (A.empty() && x == 0)
		{
			cout << 0 << "\n";
		}
		else if (x == 0)
		{
			cout << A.top() << "\n";
			A.pop();
		}
		else if (x != 0)
		{
			A.push(x);
		}
	}
}