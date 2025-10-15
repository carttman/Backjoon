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
		while (!myStack.empty() && A[myStack.top()] < A[i]) // ������ ����ְ� ���� ������ top ������ ũ��
		{
			Answer[myStack.top()] = A[i]; //���� �迭�� ��ū�� ���� ���� ����
			myStack.pop(); // �� �� �� ����
		}
		myStack.push(i);
	}
	while(!myStack.empty()) // ������ ���� ������� �ʴٸ� ��������
	{
		Answer[myStack.top()] = -1;
		myStack.pop();
	}

	for(int i=0; i< N; i++)
	{
		cout << Answer[i] << " ";
	}
}