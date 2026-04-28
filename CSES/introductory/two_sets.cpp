#include<iostream>
using namespace std;

int main(){
    int n;
    string result = "NO";
    cin>>n;
    long long int sum = ((n+1)*n)/2;
    if(n<=2 || sum%2 != 0){
        cout<<result;
    }
    else{
        int first, last;
        result = "YES";
        if(n%2==0){
            first = n/2;
            last = n/2;
            cout<<result<<endl;
            cout<<first<<endl;
            int temp = 1;
            for(int i=n; i>=1; i-=temp){
                if(temp == 1){
                    temp = 3;
                }
                else{
                    temp = 1;
                }
                cout<<i<<" ";
            }
            cout<<endl<<last<<endl;
            temp = 3;
            for(int i=n-1; i>=2; i-=temp){
                if(temp == 1){
                    temp = 3;
                }
                else{
                    temp = 1;
                }
                cout<<i<<" ";
            }
        }
        else{
            first = n/2;
            last = n/2 + 1;
            cout<<result<<endl;
            cout<<first<<endl;
            int temp = 1;
            for(int i=n; i>=3; i-=temp){
                if(temp == 1){
                    temp = 3;
                }
                else{
                    temp = 1;
                }
                cout<<i<<" ";
            }

            cout<<endl<<last<<endl;
            temp = 3;
            for(int i=n-1; i>=5; i-=temp){
                if(temp == 1){
                    temp = 3;
                }
                
                else{
                    temp = 1;
                }
                cout<<i<<" ";
            }
            cout<<"2 1";
        }
    }
    return 0;
}