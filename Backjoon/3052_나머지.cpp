#include <iostream>
#include <set>

using namespace std;

int main()
{
	// 10���� ���� �Է¹ް� 42�� ���� ������ ���Ѵ�. ���� �ٸ� ���� � �ִ��� ���Ѵ�.

	set<int> A;

	for (int i=0; i<10; i++)
	{
		int n;
		cin >> n;

		int result = n % 42;
		A.insert(result);
	}

	cout << A.size();

}