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

	//666이 붙어있는 수 중에서
	//N번째에 있는 가장 작은 수를 출력

	//1666, 2666,  ... 5666, 6660
	int num = 665;
	int cnt = 0;

	vector<int> ans;
	while (1)
	{
		num++;
		// nmu을 증가시킨다.
		// num을 string으로 변환시킨다.
		string sNum = to_string(num);

		// string.find로 '666' 탐색한다.
		if (sNum.find("666") != string::npos)
		{
		//666 있으면 정수 배열에 num 담는다
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