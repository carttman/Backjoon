#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int cnt= 0;

	while(N != 0)
	{
		if(N % 125 == 0)
		{
			cnt += 3;
		}
		else if(N % 25 == 0)
		{
			cnt += 2;
		}
		else if(N % 5 == 0)
		{
			cnt++;
		}
		N--;
	}
	cout << cnt;
}