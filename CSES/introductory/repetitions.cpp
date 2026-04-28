#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int count = 0;
    int result = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] == a[i+1]){
            count++;
        }
        else{
            count++;
            result = max(result , count);
            count = 0;
        }
    }
    cout<<result;
    return 0;
}