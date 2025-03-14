#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	multimap<int, string> m;
	
	for (int i = 0; i < N; i++)
	{
		int year;
		string name;
		
		cin >> year >> name; 
		 
		m.insert(make_pair(year, name));
	}

	

	for (auto it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << " " << it->second << "\n";
		
	}

	
	//회원들의 나이와 이름을 순서대로 준다
	//나이가 증가하는 순(오름차순), 만약 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬
}