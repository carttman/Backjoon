#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str = "";
	cin >> str;

	vector<int> A(str.size(), 0);


	for (int i = 0; i < str.size(); i++) // A에 하나씩 쪼개서 저장 
	{
		A[i] = stoi(str.substr(i, 1));
	}

	for (int i = 0; i < str.size(); i++)
	{
		int Max = i; // 현재 인덱스 Max에 저장

		for (int j = i + 1; j < str.size(); j++)
		{
			if (A[j] > A[Max]) // 비굣값이 최댓값 보다 크면
			{
				Max = j;  // 비굣값 인덱스를 최댓값 인덱스로 변경
			}
		}
		if (A[i] < A[Max]) // 현재 값이 최댓값보다 작으면 swap
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