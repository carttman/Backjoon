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
    // ª�� �ͺ���
    // ���̰� ������ ���� ��

    for (int i = 0; i < N; i++)
    {
       string  a =  "";
       cin >> a;
       s.insert(a);
    }

    for (auto it = s.begin(); it != s.end(); it++) // set���� �ߺ� ����
    {
       A.push_back(*it);
    }


    sort(A.begin(), A.end(), [](string &a, string &b) { 
        
        //return a.size() < b.size();
     
       if (a.size() == b.size()) // ���̰� ������ ���� ��
       {
            return a < b;
       }
       else // ���̰� �ٸ��� ª�� ��
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