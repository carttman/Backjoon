#include <iostream>
#include <set>

using namespace std;

int main()
{
	// 10개의 수를 입력받고 42로 나눈 나머지 구한다. 서로 다른 값이 몇개 있는지 구한다.

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