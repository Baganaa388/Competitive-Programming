#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long  int temp, result = 0;
    cin>>n;
    cin>>temp;
    for(int i=1; i<n; i++){
        long long int number;
        cin>>number;
        if(number < temp){
            result += (temp-number);
        }
        else{
            temp = number;
        }
    }
    cout<<result;
    return 0;
}