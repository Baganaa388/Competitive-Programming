#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    int k;
    cin >> n >> k;

    vector<int> digits;
    ll temp = n;
    while (temp > 0)
    {
        digits.push_back(temp % k);
        temp /= k;
    }
    if (digits.empty())
        digits.push_back(0);

    int sz = digits.size();
    vector<ll> memo(sz, -1);

    function<ll(int, bool)> dp = [&](int pos, bool tight) -> ll
    {
        if (pos < 0)
            return 1;
        if (!tight && memo[pos] != -1)
            return memo[pos];

        int lim = tight ? digits[pos] : k - 1;
        ll res = 0;

        for (int d = 0; d <= lim; d++)
        {
            if (pos % 2 == 1 && d != 0)
                continue;
            res += dp(pos - 1, tight && (d == lim));
        }

        if (!tight)
            memo[pos] = res;
        return res;
    };

    cout << dp(sz - 1, true) << "\n";
    return 0;
}