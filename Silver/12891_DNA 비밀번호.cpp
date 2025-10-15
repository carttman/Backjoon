#include <iostream>

using namespace std;

int CheckArr[4]; //비밀번호 배열
int MyArr[4]; //현재 비밀번호 상태 배열
int CheckSecret = 0; // 비밀번호 충족됐는지 확인 변수

void Add(char c); // 새로 들어온 문자를 MyArr에 업데이트 및 CheckSecret값 변경
void Remove(char c); // 제거되는 문자를 MyArr 업데이트 및 CheckSecret값 변경 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int Count = 0;

	int S, P;
	cin >> S >> P;

	string A;
	cin >> A;

	for (int i=0; i<4; i++) // 비밀번호 배열 채운다
	{
		cin >> CheckArr[i];
		if (CheckArr[i] == 0) 
		{
			CheckSecret++; // 0이면 해당 비밀번호는 체크된거나 마찬가지이므로 증가.
		}
	}

	for (int i=0; i<P; i++) //맨 처음 윈도우 범위에서 탐색 시작
	{
		Add(A[i]);
	}

	if (CheckSecret == 4) // 개수 모두 충족했다면 카운트 증가
	{
		Count++;
	}

	for (int i=P; i<S; i++)  // 나머지 탐색
	{
		int j = i - P;
		Add(A[i]); //신규 값 추가
		Remove(A[j]); // 범위 벗어나는 값 제거
		if (CheckSecret == 4)
		{
			Count++;
		}
	}
	cout << Count;
}

void Add(char c)
{
	switch (c)
	{
	case'A':
		MyArr[0]++;
		if (MyArr[0] == CheckArr[0])  //현재 상태 배열 A값과 비밀번호 배열과 값이 같다면 증가
		{
			CheckSecret++; 
		}
			break;
	case 'C':
		MyArr[1]++;
		if (MyArr[1] == CheckArr[1])
		{
			CheckSecret++;
		}
			break;
	case 'G':
		MyArr[2]++;
		if (MyArr[2] == CheckArr[2])
		{
			CheckSecret++;
		}
			break;
	case 'T':
		MyArr[3]++;
		if (MyArr[3] == CheckArr[3])
		{
			CheckSecret++;
		}
			break;
	}
}

void Remove(char c)
{
	switch (c)
	{
	case'A':
		if (MyArr[0] == CheckArr[0]) //현재 상태 배열 A값과 비밀번호 배열과 값이 같다면 감소
		{
			CheckSecret--;
		}
			MyArr[0]--;
			break;
	case'C':
		if (MyArr[1] == CheckArr[1])
		{
			CheckSecret--;
		}
			MyArr[1]--;
			break;
	case'G':
		if (MyArr[2] == CheckArr[2])
		{
			CheckSecret--;
		}
			MyArr[2]--;
			break;
	case'T':
		if (MyArr[3] == CheckArr[3])
		{
			CheckSecret--;
		}
			MyArr[3]--;
			break;
	}
}