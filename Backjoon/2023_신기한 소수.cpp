#include <iostream>

using namespace std;

void DFS(int number, int jaritsu);
bool Check(int number);
int N;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	DFS(2, 1); // 첫 번째 자릿수 dfs 전부 실행
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

}

void DFS(int number, int jaritsu)
{
	if (jaritsu == N) // 해당 자릿수까지 왔다면 소수 체크하고 출력 
	{
		if (Check(number))
		{
			cout << number << "\n";
		}
		return;
	}

	for (int i=1; i<10; i++)
	{
		if (i % 2 == 0) // 소수면 for문 종료
		{
			continue;
		}
		if (Check(number*10 + i)) // n번 자릿수 수가 소수인지 체크
		{
			DFS(number * 10 + i, jaritsu + 1); // 소수면 DFS 실행
		}
	}
}

bool Check(int number) // true면 소수, false면 소수 아님
{
	for (int i=2; i<=number / 2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

