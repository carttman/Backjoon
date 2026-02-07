#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

ll solve(vector<int>& arr, int n, int k){
    vector<int> diff (n, 0);
    ll result = 0;
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < n; i++){
        diff[i] = arr[i+1] - arr[i]; 
    }
    
    sort(diff.begin(), diff.end(), cmp);
    
    for(int i = k; i < n; i++){
        result += diff[i]; 
    }
    
    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    
    cin >> n >> k;
    
    vector<int> arr (n+1, 0);
    
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    
    cout << solve(arr, n, k) << "\n";
    
    return 0;
}