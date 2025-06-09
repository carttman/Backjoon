#include <iostream>

using namespace std;

int Re(int floor, int ho)
{
	int sum = 0;
	
	if (floor == 0)
	{
		return ho;
	}
	else if (ho == 1)
	{
		return 1;
	}
	else
	{	// k-1층 n호 + k층 n-1호
		return Re(floor - 1, ho) + Re(floor, ho-1);
	}
}

int main()
{
	// a층의 b호에 살려면
	// a-1층의 1호부터 b호까지 사람들의 수의 합
	// 주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명 살고있는지
	// 아파트는 0층부터 있음 / 각 층은 1호부터, 0층의 i호에는 i명이 산다.
	int t;

	cin >> t;

	for (int i=0; i<t; i++)
	{
		int k, n;
		cin >> k >> n;

		cout << Re(k, n) << "\n";
	}

}