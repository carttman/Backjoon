#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	//666�� �پ��ִ� �� �߿���
	//N��°�� �ִ� ���� ���� ���� ���

	//1666, 2666,  ... 5666, 6660
	int num = 665;
	int cnt = 0;

	vector<int> ans;
	while (1)
	{
		num++;
		// nmu�� ������Ų��.
		// num�� string���� ��ȯ��Ų��.
		string sNum = to_string(num);

		// string.find�� '666' Ž���Ѵ�.
		if (sNum.find("666") != string::npos)
		{
		//666 ������ ���� �迭�� num ��´�
			ans.push_back(num);
			cnt++;
		}
		
		//
		if (cnt == N)
		{
			cout << ans[cnt-1];  
			return 0;
		}
	}
	
	
}