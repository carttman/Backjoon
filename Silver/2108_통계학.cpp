#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    map<int, int> frequency;

    int sum = 0;

    for (int i = 0; i < n; i++) 
    {
        cin >> numbers[i];

        sum += numbers[i];
        frequency[numbers[i]]++;
    }

    // ������
    double mean = round((double)sum / n);

    // �߾Ӱ��� ���ϱ� ���� ����
    sort(numbers.begin(), numbers.end());

    int median = numbers[n / 2];

    // �ֺ� ���ϱ�
    int mode = numbers[0];
    int maxFreq = 0;

    bool secondMode = false;
    for (auto &entry : frequency) 
    {
        if (entry.second > maxFreq) 
        {
            maxFreq = entry.second;
            mode = entry.first;
            secondMode = false;
        }
    	else if (entry.second == maxFreq) 
        {
            if (!secondMode) 
            {
                mode = entry.first;
                secondMode = true;
            }
        }
    }
    // ���� ���ϱ�
    int range = numbers.back() - numbers.front();

    // ��� ���
    cout << (int)mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << range << '\n';
    return 0;
}
