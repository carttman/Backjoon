#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> dataType(n);
	for (int i=0; i<n; i++)
	{
		cin >> dataType[i];

	}

	deque<int> dq;
	for (int i=0; i<n; i++)
	{
		int num;
		cin >> num;

		if (!dataType[i])
			dq.push_back(num);
	}

	int m;
	cin >> m;

	for (int i=0; i<m; i++)
	{
		int num;
		cin >> num;

		dq.push_front(num);

		cout << dq.back() << " ";

		dq.pop_back();
	}


}

