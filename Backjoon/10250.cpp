#include <iostream>
#include <vector>

using namespace std;

int main()
{

	// 類 * 100 + 寞
	// 類 = n % h
	// 寞 = n / h + 1
	int t;
	int h, w, n;
	int result;
	cin >> t;

	for (int i=0; i<t; i++)
	{
		cin >> h >> w >> n;

		if (n % h == 0) // 奩滔
		{
			result = h * 100 + (n / h); // 類 * 100 + �ˉ�(n廓簞 槳椒 / 類)
		}
		else
		{
			result = (n % h) * 100 + (n/h) + 1;
		}
		cout << result << "\n";
	}
	
}