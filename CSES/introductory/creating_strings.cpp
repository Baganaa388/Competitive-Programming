#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    sort(a.begin(), a.end());  
    set<string> permutations;  

    do {
        permutations.insert(a);
    } while (next_permutation(a.begin(), a.end()));

    cout << permutations.size() << endl;
    for (auto s : permutations) {
        cout << s << endl;
    }

    return 0;
}
