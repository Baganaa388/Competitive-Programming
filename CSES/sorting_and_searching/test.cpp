// perfix sum гэж бодож байна нйилбэрийг нэг удаа O(n) олоод 1:n хүртэл шалгаад two slide ашиглаад
// O(n) тэгээд тоолно
// time : O(2n)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll s = 0;
    vector<ll> a(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        s += t;
        a[i] = s;
    }
    // for (int x : a)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        // cout << i << " : " << a[i] << " " << a[n] - a[i] << endl;
        if (a[i] == a[n] - a[i])
        {
            c++;
        }
    }
    cout << c << "\n";
    return 0;
}