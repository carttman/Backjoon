#include <iostream>
#include <vector>

using namespace std;

int checkArr[4]; // ��й�ȣ üũ �迭
int CurrArr[4]; // ���� ���� �迭
int checkSecret = 0;

void Add(char c);
void Remove(char c);

int main()
{
	string S = ""; //DNA ���ڿ�
	string P = ""; // �κ� ���ڿ�
	int S_Size = 0; //S ���ڿ� �Է�
	int P_Size = 0; //P ���ڿ� �Է�
	vector<int> P_MinCount(4, 0); // A, C, G, T �� �ּ� ����

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