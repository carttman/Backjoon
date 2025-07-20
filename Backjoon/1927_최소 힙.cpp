#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 배열에 자연수 x를 넣는다.
	// 가장 작은 값을 출력하고 배열에서 제거한다.

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