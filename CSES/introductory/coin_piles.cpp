#include<bits/stdc++.h>
using namespace std;
 
bool solve(long long int a, long long int b){
    if(a+b == 0){
        return true;
    }
    else if(a+b <= 2){
        return false;
    }
    else{
        long long int temp;
        temp = abs(a-b);
        if(temp > min(a,b)){
            return false;
        }
        else{
            return ((a+b)%3==0) ? (true) : (false);
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(solve(a,b)){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}