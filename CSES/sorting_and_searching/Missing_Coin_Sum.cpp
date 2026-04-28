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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > result + 1)
        {
            break;
        }
        else
        {
            result += a[i];
        }
    }
    cout << result + 1 << endl;
    return 0;
}