#include <iostream>
#include <vector>

using namespace std;

int checkArr[4]; // 비밀번호 체크 배열
int CurrArr[4]; // 현재 상태 배열
int checkSecret = 0;

void Add(char c);
void Remove(char c);

int main()
{
	string S = ""; //DNA 문자열
	string P = ""; // 부분 문자열
	int S_Size = 0; //S 문자열 입력
	int P_Size = 0; //P 문자열 입력
	vector<int> P_MinCount(4, 0); // A, C, G, T 의 최소 개수

	cin >> S_Size >> P_Size;
	cin >> S;

	for(int i=0; i < P_MinCount.size(); i++)
	{
		cin >> P_MinCount[i];
	}

	
	for(int i=0; i < S.size(); i++)
	{
		int minRange = i;
		int maxRange = i + P.size();

		for(int j=minRange; j < maxRange; j++)
		{
			if(P.size() == )
			{
				
			}
		}
	}
	

	return 0;
}