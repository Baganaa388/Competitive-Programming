#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> result;

    int a = 1, b = 2, c = 3;
    int total = (1 << n) - 1;

    if(n % 2 == 0) swap(b, c);

    int i = 1;
    while(i <= total) {
        if (i % 3 == 1) {
            result.push_back({a, c});
        } else if (i % 3 == 2) {
            result.push_back({a, b});
        } else {
            result.push_back({b, c});
        }
        i++;
    }

    cout << result.size() << endl;
    for(auto x : result){
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
