// 잘못된 수를 부를 때마다 0을 외치면, 가장 최근에 쓴 수를 지운다
// 모든 수를 받아 적은 후 그 수의 합을 구하라

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