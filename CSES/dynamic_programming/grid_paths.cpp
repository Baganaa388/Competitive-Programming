#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    char grid[n][n];
    int dp[n][n];
    ll mod = 1000000007;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] != '*'){
                if(i > 0) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
                if(j > 0) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % mod;
            }
            else{
                dp[i][j] = 0;
            }
        }
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[n-1][n-1]<<endl;
    return 0;
}