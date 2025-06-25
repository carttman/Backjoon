#include <iostream>

using namespace std;

int main()
{
	// N 킬로그램을 채워야 한다
	// 봉지는 3킬로그램 5킬로그램 두 가지가 있음
	// 최대한 봉지가 적게끔 한다

	// N 으로 만들수 없다면 -1

	int N;
	cin >> N;

	int cnt = 0;

	while (N >= 0)
	{
		if (N % 5 == 0)
		{
			cnt += (N / 5);
			cout << cnt << "\n";
			return 0;
		}
		//5로 안나눠지면 3을 카운팅한다.
		N -= 3;
		cnt++;

	}
	cout << -1;
}