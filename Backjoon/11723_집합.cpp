#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//����ִ� ������ S�� �ִ�.
	// add -> s�� x �߰� / x�� �̹� ������ ���� ����
	// remove -> S���� x���� / x�� ������ ���� ����
	// check -> x�� ������ 1, ������ 0 ���
	// toggle -> x�� ������ x ����, ������ x �߰�
	// all -> S�� 1~20���� �ٲ۴�.
	// empty -> S�� ���������� �ٲ۴�.

	int M;
	cin >> M;

	vector<int> A;
	int num;
	auto it = find(A.begin(), A.end(), num);

	for (int i = 0; i < M; i++)
	{
		string s = "";
		cin >> s >> num;

		if (s == "add")
		{	// �ش� ���� ���ٸ�
			if (it == A.end())
			{
				A.push_back(num);
			}
		}
		else if (s == "remove")
		{	//�ش� ���� �ִٸ� 
			if (it != A.end())
			{	
				int d = it - A.begin();
				//A.erase(A.begin(), A.end(), d);
			}
		}
		else if (s == "check")
		{
			if (it == A.end())
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (s == "toggle")
		{

		}
		else if (s == "all")
		{

		}
		else if (s == "empty")
		{

		}
		
	}

	return 0;
}