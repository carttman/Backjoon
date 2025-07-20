#include <iostream>
#include <vector>

using namespace std;

int BlueCnt = 0;
int WhiteCnt = 0;


	// 색종이를 재귀로 자른다....
	// 1. 배열을 인자로 넣는다.
	// 2. 배열을 순회하면서 전체가 단색인지 확인한다.
	// 3. 단색이 아니라면 재귀로 들어간다.
	// 4. 자른 종이가 단색이라면 해당 색 개수 카운트 증가시킨다. 
	// 

void Recursion(vector<vector<int>>& A, int size)
{
	

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (A[i][j] != A[i][j + 1])
			{
				Recursion(A, size / 2);
			}

			
		}
	}


}

int main()
{
	// 정사각형은 하얀색 or 파란색으로 칠해져있다.
	// 다양한 크기와 단일색을 가진 정사각형 모양으로 자른다.

	// 전체 종이가 같은 색으로 칠해져있지 않다면 가로, 세로로 중간 부분 자른다
	
	// N/2 * N/2의 색종이로 나눈다.
	// 나눈 색종이들도 단일 색으로 칠해져 있지않다면 또 나눈다.
	// 이 과정을 따른 잘라진 종이가 단일색으로 칠해져있을때까지 반복한다.

	//한 변의 길이는 2, 4, 8, 16, 32, 64, 128중 하나이다.

	int N;
	cin >> N;

	vector<vector<int>> A(N, vector<int>(N, 0));
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int n;
			cin >> n;

			A[i][j] = n;
		}
	}

	cout << "d";

}

