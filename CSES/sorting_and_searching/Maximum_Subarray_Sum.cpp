#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll temp = a[0];
    ll result = a[0];
    for (int i = 1; i < n; i++)
    {
        temp = max(a[i] , temp+a[i]);
        result = max(temp, result);
    }
    cout << result << endl;
    return 0;
}