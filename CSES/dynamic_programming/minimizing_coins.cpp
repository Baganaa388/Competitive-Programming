#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int sum;
    cin>>n>>sum;
    vector<int> coins(n);
    vector<vector<int>> dp(n, vector<int>(sum, 0));
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }
    
}