#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.insert(temp);
    }

    while (m--)
    {
        int t;
        cin >> t;
        auto it = a.upper_bound(t);
        if (it == a.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            it--;
            cout << *it << endl;
            a.erase(it);
        }
    }
}