#include<bits/stdc++.h>
using namespace std;

void print(map<char, int> &letters){
    string result ,first, last , temp, odd,h;
    for(auto x : letters){
        if(x.second % 2 == 0){
            string temp(x.second/2, x.first);
            first += temp;
            temp = "";
        }
        else{
            string odd(x.second, x.first);
            h = odd;
        }
    }
    result += first;
    result += h;
    reverse(first.begin(), first.end());
    result += first;
    cout<<result;
}

int main(){
    string a;
    cin>>a;
    map<char, int> letters;
    int n = a.size();
    for(int i=0; i<n; i++){
        letters[a[i]]++;
    }
    int even = 0, odd = 0;
    for(auto x : letters){
        if(x.second % 2 == 0) even++;
        else odd++;
    }
    if((n%2==1 && odd == 0) || (odd > 1) || (n%2==0 && odd == 1)){
        cout<<"NO SOLUTION";
    }
    else{
        print(letters);
    }
    return 0;
}