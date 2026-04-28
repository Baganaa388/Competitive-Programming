#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a;
    a.push_back("");
    for (int i = 0; i < n; i++) {
        vector<string> temp;
        for (int j = 0; j < a.size(); j++) {
            temp.push_back("0" + a[j]);
       }
        for (int j = a.size()-1; j>=0; j--) {
            temp.push_back("1" + a[j]);
        }
        a = temp; 
    }

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;

    return 0;
}
