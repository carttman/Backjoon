#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str = "";
	cin >> str;

	vector<int> A(str.size(), 0);


	for (int i = 0; i < str.size(); i++) // A�� �ϳ��� �ɰ��� ���� 
	{
		A[i] = stoi(str.substr(i, 1));
	}

	for (int i = 0; i < str.size(); i++)
	{
		int Max = i; // ���� �ε��� Max�� ����

		for (int j = i + 1; j < str.size(); j++)
		{
			if (A[j] > A[Max]) // �񱷰��� �ִ� ���� ũ��
			{
				Max = j;  // �񱷰� �ε����� �ִ� �ε����� ����
			}
		}
		if (A[i] < A[Max]) // ���� ���� �ִ񰪺��� ������ swap
		{
			int temp = A[i];
			A[i] = A[Max];
			A[Max] = temp;
		}
	}

	for (int i = 0; i < A.size(); i++)
	{
		cout << A[i];
	}
}