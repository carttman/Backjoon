#include <iostream>
#include <deque>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> dataStructure(n);

	for (auto& i : dataStructure)
	{
		cin >> i;
	}

	deque<int> queueStack;

	for (int i=0; i<n; i++)
	{
		int x;
		cin >> x;

		if (dataStructure.at(i) == 0)
		{
			queueStack.push_back(x);
		}
	}
	int m;
	cin >> m;

	for (int i=0; i<m; i++)
	{
		int x;
		cin >> x;
		queueStack.push_front(x);

		cout << queueStack.back() << " ";
		queueStack.pop_back();
	}

	return 0;
}