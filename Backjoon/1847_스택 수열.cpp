#include <iostream>
#include <stack>
#include <vector>

using namespace std;



int main()
{
	int N;
	cin >> N;

	vector<int> A(N, 0);
	vector<char> result;

	for(int i=0; i<N; i++) // 수열 배열 저장한다.
	{
		cin >> A[i];
	}

	stack<int> myStack;

	int count = 1; // 현재 수열 카운트
	bool bIsResult = true; // 해당 수열이 가능한지 판단여부 체크

	for(int i=0; i < N; i++)
	{
		int currNum = A[i]; // 현재 수열 값 저장
		if(currNum >= count) //현재 수열 값이 카운트보다 크거나 같다면 
		{
			while(currNum >= count) // 값이 같아질 때까지 push한다.
			{
				myStack.push(count);
				count++;
				result.push_back('+');
			}
			myStack.pop(); // 마지막 값 pop
			result.push_back('-');
		}
		else
		{
			int n = myStack.top(); // 맨 윗값 저장 후 pop 
			myStack.pop();
			if(n > currNum) // 윗 값이 현재 수열 값 보다 작다면 수열 표현할 수 없으므로 종료.
			{
				cout << "NO";
				bIsResult = false;
				break;
			}
			else
			{
				result.push_back('-');
			}
		}
	}
	if(bIsResult)
	{
		for(int i=0; i<result.size(); i++)
		{
			cout << result[i] << "\n";
		}
	}
}