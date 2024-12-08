#include <iostream>
#include <stack>
#include <vector>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);
	vector<int> Answer(N, 0);

	for(int i=0; i < N; i++)
	{
		cin >> A[i];
	}

	stack<int> myStack;
	myStack.push(0);

	for(int i=1; i<N; i++)
	{
		while (!myStack.empty() && A[myStack.top()] < A[i]) // 스택이 비어있고 현재 수열이 top 값보다 크면
		{
			Answer[myStack.top()] = A[i]; //정답 배열에 오큰수 현재 수열 저장
			myStack.pop(); // 맨 윗 값 제거
		}
		myStack.push(i);
	}
	while(!myStack.empty()) // 스택이 아직 비어있지 않다면 빌때까지
	{
		Answer[myStack.top()] = -1;
		myStack.pop();
	}

	for(int i=0; i< N; i++)
	{
		cout << Answer[i] << " ";
	}
}