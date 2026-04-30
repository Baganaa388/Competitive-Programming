#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[300005];

int main()
{
    cin.sync_with_stdio(false);
    cin.tie(NULL);

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ll ans = 0;
    for (int l = 0; l < n; l++)
    {
        int mx = a[l], mn = a[l];
        ans++;
        for (int r = l + 1; r < n; r++)
        {
            int x = a[r];
            if (x > mx)
                mx = x;
            else if (x < mn)
                mn = x;
            ans += mx / mn;
        }
    }

    printf("%lld\n", ans);
    return 0;
}