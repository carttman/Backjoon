#include <iostream>
#include <queue>

using namespace std;

struct compare
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b)) //절댓값이 같다면 음수 우선 정렬
		{
			return a > b;
		}
		else 
		{
			return abs(a) > abs(b); // 절댓값 기준으로 정렬
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
			if (MyQueue.empty()) // 비어있으면 0 출력
			{
				cout << "0" << '\n';
			}
			else // 절댓값이 최소인 값 출력
			{
				cout << MyQueue.top() << '\n'; // 가장 작은값 출력하고 값 제거
				MyQueue.pop();
			}
		}
		else
		{
			MyQueue.push(X);
		}
	}
}