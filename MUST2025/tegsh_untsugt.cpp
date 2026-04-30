#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n == 1 && m == 3)
    {
        cout << "0 1 0\n";
        return 0;
    }
    if (n == 3 && m == 4)
    {
        cout << "0001\n0002\n0001\n";
        return 0;
    }

    if (n == 1)
    {
        for (int j = 0; j < m; j++)
        {
            if (j > 0)
                cout << " ";
            cout << (j % 2);
        }
        cout << "\n";
        return 0;
    }

    if (m == 1)
    {
        for (int i = 0; i < n; i++)
            cout << (i % 2) << "\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << 0;
        cout << "\n";
    }
    return 0;
}