#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	// 정수 A를 B로 바꾼다.
	// 2를 곱한다.
	// 곱한 수를 수의 가장 오른쪽에 추가한다

	// 2 4 8 81

	int a, b;

	cin >> a >> b;

	int cnt = 1;

	queue<int> q;

	q.push(a);

	while (!q.empty())
	{

		int temp = q.front();
		q.pop();

		if (b == temp)
		{
			cout << cnt;
			return 0;
		}

		if (temp > b)
		{
			cout << -1;
			return 0;
		}

		cnt++;

		if (temp * 2 < b)
		{
			q.push(temp * 2);
		}
		
		string sTemp = to_string(temp);
		sTemp.push_back('1');
		int iTemp = stoi(sTemp);

		if (iTemp < b)
		{
			q.push(iTemp);
		}
	}

	//while (b > a)
	//{
	//	if (b % 10 == 1) // 마지막 자리가 1이라면
	//	{
	//		b /= 10;	// 마지막 자리 제거
	//	}
	//	else if (b % 2 == 0)	// 짝수라면
	//	{
	//		b /= 2;		//절반으로 나눈다
	//	}
	//	else
	//	{
	//		cout << -1;
	//		return 0;
	//	}

	//	cnt++;
	//}

	//if (a == b)
	//{
	//	cout << cnt;
	//}
	//else
	//{
	//	cout << -1;
	//}

	return 0;
}