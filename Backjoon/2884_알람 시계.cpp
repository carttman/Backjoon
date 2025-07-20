#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	// 시와 분이 주어진다.
	// 주어진 시간에서 45분을 뺀 값을 출력한다.
	// 24시가 넘어가면 0시부터 시작한다.
	// 불필요한 0은 사용하지 않는다.

	int h, m;
	cin >> h >> m;

	// 분이 45보다 작으면
	if (m < 45)
	{	// 시간 하나 소모하고 45를 미리 뺸다
		h--;
		// 남은 15분을 더한다.
		m += 15;

		// 만약 시간이 0 아래면 23시로 
		if (h < 0)
		{
			h = 23;
		}
	}
	else // 분이 45보다 크거나 같으면
	{	// 그냥 45분 그대로 뺀다
		m -= 45;
	}

	cout << h << " " << m << "\n";
}