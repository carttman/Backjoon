#include <iostream>
#include <vector>

using namespace std;

int main()
{

	// �� * 100 + ��
	// �� = n % h
	// �� = n / h + 1
	int t;
	int h, w, n;
	int result;
	cin >> t;

	for (int i=0; i<t; i++)
	{
		cin >> h >> w >> n;

		if (n % h == 0) // �ݷ�
		{
			result = h * 100 + (n / h); // �� * 100 + ȣ��(n��° �մ� / ��)
		}
		else
		{
			result = (n % h) * 100 + (n/h) + 1;
		}
		cout << result << "\n";
	}
	
}