#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//비어있는 공집합 S가 있다.
	// add -> s에 x 추가 / x가 이미 있으면 연산 무시
	// remove -> S에서 x제거 / x가 없으면 연산 무시
	// check -> x가 있으면 1, 없으면 0 출력
	// toggle -> x가 있으면 x 제거, 없으면 x 추가
	// all -> S를 1~20으로 바꾼다.
	// empty -> S를 공집합으로 바꾼다.

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
		{	// 해당 값이 없다면
			if (it == A.end())
			{
				A.push_back(num);
			}
		}
		else if (s == "remove")
		{	//해당 값이 있다면 
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