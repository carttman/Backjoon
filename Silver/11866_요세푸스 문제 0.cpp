#include <iostream>
#include <queue>

using namespace std;

int main()
{
	// N번까지 원을 이루며 앉아있다.
	// 순서대로 K번째 사람 제거
	// N번의 사람이 모두 제거될 때까지 계속한다.
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