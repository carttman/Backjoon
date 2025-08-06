#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int i = 1;

	// 몇 번째 대각선에 있는지 탐색
	// 현재 대각선의 갯수만큼 뺀다
	while (n > i)
	{
		n -= i;
		i++;
	}

	if (i % 2 != 0)
	{
		cout << i + 1 - n << '/' << n << "\n";
	}
	else
	{
		cout << n << '/' << i + 1 - n << "\n";
	}

	return 0;
}