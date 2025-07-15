#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, ans = 0;
	string word;
    cin >> n >> m >> word;

    for (int i = 1; i < word.size(); i++) 
    {
        int count = 0;

        if (word[i - 1] == 'I') 
        {
            while (word[i] == 'O' && word[i + 1] == 'I') 
            {
                i += 2;
                count++;

                if (count == n)
                {
	                count--; ans++;
                }
            }
        }
    }
    cout << ans << '\n';
}