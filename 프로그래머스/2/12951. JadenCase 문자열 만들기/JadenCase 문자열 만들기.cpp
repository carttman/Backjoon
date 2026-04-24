#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    string tmp = "";
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == ' ' )
        {
            if(tmp[0] >= 'a' && tmp[0] <= 'z')
            {
               tmp[0] = tmp[0] - 32;
            }
            
            for(int j=1; j<tmp.size(); j++)
            {
                if(tmp[j] >= 'A' && tmp[j] <= 'Z')
                {
                    tmp[j] = tmp[j] + 32;
                }
            }
            answer += tmp + ' ';
            tmp = "";
        }
        else
        {
            tmp += s[i];
        }
    }
    
    if(tmp[0] >= 'a' && tmp[0] <= 'z')
    {
        tmp[0] = tmp[0] - 32;
    }
    for(int j=1; j<tmp.size(); j++)
    {
        if(tmp[j] >= 'A' && tmp[j] <= 'Z')
        {
            tmp[j] = tmp[j] + 32;
        }
    }
        answer += tmp;
    
    return answer;
}