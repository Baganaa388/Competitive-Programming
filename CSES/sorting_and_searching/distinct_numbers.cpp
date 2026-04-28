#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    map<ll, ll> a;
    for(int i=0; i<n; i++){
        ll num;
        cin>>num;
        a[num]++;
    }
    cout<<a.size()<<endl;
    return 0;
}