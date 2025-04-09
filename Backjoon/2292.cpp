#include <iostream>

using namespace std;

int main()
{
	
	ios::sync_with_stdio(false);

	int N;
	cin >> N; // 20

	int cnt = 1;
	int layer = 1;

	while (N > cnt) // 20 > 1 // 20 > 7 // 20 > 19
	{
		cnt += 6 * layer; // 7 // 19 // 37
		layer++; // 2 // 3 // 4
	}

	cout << layer;
	return 0;
}