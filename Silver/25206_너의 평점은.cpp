#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, float> mp = {{"A+", 4.5},{"A0", 4.0},{"B+", 3.5},{"B0", 3.0},{"C+", 2.5},{"C0", 2.0},{"D+", 1.5}, {"D0", 1.0}, {"F", 0.0} };

	double result = 0;
	double sum = 0;

	for (int i=0; i<20; i++)
	{
		string s, rank;
		double score;

		cin >> s >> score >> rank;

		if (rank == "P")
			continue;

		sum += score;
		result += score * mp[rank];
	}

	cout << fixed;
	cout.precision(6);
	cout << result / sum;
}