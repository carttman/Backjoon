#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
#include <map>
#include <queue>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, dasom;
	cin >> n >> dasom;

	priority_queue<int> pq;

	for (int i = 0; i < n - 1; i++)
	{
		int num;
		cin >> num;

		if (dasom <= num)
			pq.push(num);
	}

	int ans = 0;
	while (!pq.empty() && pq.top() >= dasom)
	{
		int tmp = pq.top();
		pq.pop();

		dasom++;
		ans++;

		tmp--;
		pq.push(tmp);

	}

	cout << ans;

	return 0;
}