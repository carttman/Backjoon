#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	stack<int> myStack;

	int N;
	cin >> N;

	for(int i=0; i<N; i++)
	{
		string tmp = "";
		int k = 0;

		cin >> tmp;
		if(tmp == "push")
		{
			cin >> k;
			myStack.push(k);
		}
		else if(tmp == "pop")
		{
			if(!myStack.empty())
			{
				int tmp = myStack.top();
				cout << tmp << '\n';

				myStack.pop();
				
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if(tmp == "size")
		{
			cout << myStack.size() << '\n';
		}
		else if(tmp == "empty")
		{
			if(myStack.empty())
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if(tmp == "top")
		{
			if(myStack.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << myStack.top() << '\n';
			}
		}

	}

}
