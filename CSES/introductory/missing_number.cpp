#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    unsigned int sum = 0;
    unsigned int real_sum, result;
    cin>>n;
    for(int i=1; i<n; i++){
        long long int temp;
        cin>>temp;
        sum += temp;
    }
    real_sum = (n*(n+1)/2);
    result = real_sum - sum;
    cout<<  result;
    return 0;
}