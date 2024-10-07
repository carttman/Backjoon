#include <iostream>
#include <stack>
#include <vector>

using namespace std;



int main()
{
	int N; //수열 개수
	cin >> N;
	vector<int> A(N, 0); //수열 저장 배열
	vector<char> resultV; 

	for(int i=0; i < N; i++) // 수열 개수만큼
	{
		cin >> A[i]; // 수열 저장
	}

	stack<int> myStack; // 스택 선언
	int num = 1; // 오름차순 수
	bool result = true;

	for(int i=0; i < A.size(); i++)
	{
		int su = A[i]; // 현재 수열의 수
		if(su >= num) // 현재 수열의 수가 n이랑 다르다면 
		{
			while(su >= num) // 넣고 뺀다
			{
				//num++;
				myStack.push(num++);
				resultV.push_back('+');
			}
			myStack.pop();
			resultV.push_back('-');
		}
		else // 현재 수열 수가 n이랑 같으면
		{
			int save = myStack.top(); //맨 윗 값 저장하고 지우기
			myStack.pop();

			if(save > su) // 맨 윗 값이 현재 수열 수 보다 작다면
			{
				cout << "NO";
				result = false;
				break;
			}
			else
			{
				resultV.push_back('-');
			}
		}
		
	}
	if (result)
	{
		for (int i = 0; i < resultV.size(); i++)
		{
			cout << resultV[i] << '\n';
		}
	}

}