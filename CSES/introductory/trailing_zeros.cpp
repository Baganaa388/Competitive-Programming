#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int result = 0;
    for(long long int i = 5; i<=n; i+=5){
        if(i % 5 == 0){
            int temp = i/5;
            result++;
        }
    }
    cout<<result;
    return 0;
}