#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a[t] = i;
    }

    int round = 1;
    for (int number = 2; number <= n; number++)
    {
        if (a[number] < a[number - 1])
        {
            round++;
        }
    }

    cout << round << endl;
    return 0;
}