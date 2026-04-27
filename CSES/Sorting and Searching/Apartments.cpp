#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, count = 0;
    while (i < n && j < m)
    {
        if (b[j] < a[i] - k)
        {
            j++;
        }
        else if (b[j] > a[i] + k)
        {
            i++;
        }
        else
        {
            count++;
            i++;
            j++;
        }
    }

    cout << count << endl;
    return 0;
}