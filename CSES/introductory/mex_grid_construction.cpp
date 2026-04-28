#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,j,a = 0;
    vector<vector<int>> grid(n, vector<int>(n,0));

    for(i=1; i<n; i++){
        int temp = a + 1;
        for(j=0; j<i; j++){
            if(i%2!=0){
                a++;
                grid[i][j] = a;
            }
            else{
                temp--;
                grid[i][j] = temp;
            }

        }
    }


    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<grid[i][j] << " ";
        }
        cout<<"\n";
    }
}