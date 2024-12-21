#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int A[10001] = {0};
	int number = 0;

	for(int i=1; i <= N; i++) // number 인덱스의 값 증가시킨다.
	{
		cin >> number;
		A[number]++;
	}

	for(int i=0; i<= 10000; i++) // 배열에 저장된 인덱스 전부 출력시킨다.
	{
		if(A[i] != 0)
		{
			for(int j=0; j < A[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}

}