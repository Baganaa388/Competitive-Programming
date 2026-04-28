#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int mod = pow(10,9)+7;
    long long int result = 1;
    for(int i=1; i<=n; i++){
        result = result * 2;
        result %= mod;
    }
    cout<<result;
    return 0;
}