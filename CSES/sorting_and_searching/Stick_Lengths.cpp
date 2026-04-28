#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(all(a));
    int m = a[n/2];
    ll result = 0;
    for(int i=0; i<n; i++){
        result += abs(m - a[i]);
    }
    cout << result << endl;
    return 0;
}