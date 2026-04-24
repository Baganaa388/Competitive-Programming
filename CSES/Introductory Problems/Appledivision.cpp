#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> sol(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> sol[i];
        sum += sol[i];
    }

    sort(sol.begin(), sol.end());

    for (auto x : sol)
    {
        cout << x << " ";
    }
    cout << endl;
    long long sum1 = 0, sum2 = 0;

    if (n % 2 == 0)
    {
        int i = 0;
        for (i = 0; i < n / 4; i++)
        {
            // cout << sol[i] << "+" << sol[n - i - 1] << "=" << sol[i] + sol[n - i - 1] << endl;
            sum1 = sum1 + sol[i] + sol[n - i - 1];
        }
        sum1 += sol[n / 2 - 1];
        // cout << "c1 : " << sum1 << endl;

        for (int j = i; j < n / 4 + i; j++)
        {
            //cout << sol[j] << "+" << sol[n - j - 1] << "=" << sol[j] + sol[n - j - 1] << endl;
            sum2 = sum2 + sol[j] + sol[n - j - 1];
        }
        //cout << sol[n / 2] << endl;
        sum2 += sol[n / 2];

        cout << abs(sum1 - sum2);
        // cout << "c2 : " << sum2 << endl;
    }
    else
    {
        for (int i = 0; i < n / 2; i += 2)
        {
            sum1 = sum1 + sol[i] + sol[n - i - 1];
        }
        sum2 = sum - sum1 - sol[n / 2];
        // cout << sum << " " << sum1 << " " << sum2 << endl;
        cout << abs(sum2 - sum1);
    }
}