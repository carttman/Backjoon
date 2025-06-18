#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	

	int A, B, V;
	cin >> A >> B >> V;

	int day = 1;

	day += (V - A) / (A - B); 


	if ((V - A) % (A - B) != 0) 
	{
		day++;
	}

	if (A >= V)
	{
		cout << "1";
	}
	else
	{
		cout << day;
	}

	return 0;
}