#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
	// ���� A�� B�� �ٲ۴�.
	// 2�� ���Ѵ�.
	// ���� ���� ���� ���� �����ʿ� �߰��Ѵ�

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
	//	if (b % 10 == 1) // ������ �ڸ��� 1�̶��
	//	{
	//		b /= 10;	// ������ �ڸ� ����
	//	}
	//	else if (b % 2 == 0)	// ¦�����
	//	{
	//		b /= 2;		//�������� ������
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