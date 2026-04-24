#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> a;
    
    string tmps = "";
    
    for(int i=0; i<s.size(); i++)
    {
       if(s[i] == ' ' )
       {
            int tmpi = stoi(tmps);
            a.push_back(tmpi);
           tmps = "";
       }
        else
        {
            tmps += s[i];
        }
        
    }
    
    int tmpi = stoi(tmps);
    a.push_back(tmpi);
    
    sort(a.begin(), a.end());
    
    answer += to_string(a[0]) + ' ' + to_string(a[a.size()-1]);
    return answer;
}