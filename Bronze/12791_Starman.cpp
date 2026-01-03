#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <deque>
#include <limits.h>
#include <cmath>
#include <map>
using namespace std;

string a[25][2] = {
	"1967", "DavidBowie",
	"1969", "SpaceOddity",
	"1970", "TheManWhoSoldTheWorld",
	"1971", "HunkyDory",
	"1972", "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars",
	"1973", "AladdinSane",
	"1973", "PinUps",
	"1974", "DiamondDogs",
	"1975", "YoungAmericans",
	"1976", "StationToStation",
	"1977", "Low",
	"1977", "Heroes",
	"1979", "Lodger",
	"1980", "ScaryMonstersAndSuperCreeps",
	"1983", "LetsDance",
	"1984", "Tonight",
	"1987", "NeverLetMeDown",
	"1993", "BlackTieWhiteNoise",
	"1995", "1.Outside",
	"1997", "Earthling",
	"1999", "Hours",
	"2002", "Heathen",
	"2003", "Reality",
	"2013", "TheNextDay",
	"2016", "BlackStar",
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int q, s, e;
	cin >> q;

	while (q--)
	{
		int ans = 0;
		cin >> s >> e;
		for (int i = 0; i < 25; i++)
			if (stoi(a[i][0]) >= s && stoi(a[i][0]) <= e)
				ans++;

		cout << ans << '\n';

		for (int i = 0; i < 25; i++)
			if (stoi(a[i][0]) >= s && stoi(a[i][0]) <= e)
				cout << a[i][0] << ' ' << a[i][1] << '\n';

	}
	return 0;
}