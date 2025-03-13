#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    
    vector<string> A(0);
    set<string> s;
    // 짧은 것부터
    // 길이가 같으면 사전 순

    for (int i = 0; i < N; i++)
    {
       string  a =  "";
       cin >> a;
       s.insert(a);
    }

    for (auto it = s.begin(); it != s.end(); it++) // set으로 중복 제거
    {
       A.push_back(*it);
    }


    sort(A.begin(), A.end(), [](string &a, string &b) { 
        
        //return a.size() < b.size();
     
       if (a.size() == b.size()) // 길이가 같으면 사전 순
       {
            return a < b;
       }
       else // 길이가 다르면 짧은 순
       {
           return a.size() < b.size();
       }
       });
     
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "\n";
    }
     
    return 0;
}