#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	while (1) {
		int n, m;
		cin >> n >> m;

		if (n == 0 && m == 0) 
			break;

		vector<int> sk;
		vector<int> sy;
		int num;
		for (int i = 0; i < n; i++) 
		{
			cin >> num;
			sk.push_back(num);
		}
		for (int i = 0; i < m; i++) 
		{
			cin >> num;
			sy.push_back(num);
		}

		int count = 0;
		int index1 = 0;
		int index2 = 0;

		while (index1 < n && index2 < m) 
		{
			if (sk[index1] == sy[index2])
			{
				count++;
				index1++; 
			}
			else if (sk[index1] > sy[index2]) 
				 index2++; 
			else 
			index1++; 
		}
		cout << count << endl;
	}

	return 0;
}