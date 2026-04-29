#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    int n, m;
    cin >> n >> m;
    vector<int> real(n + 1);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        real[t] = i;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> pos;
        pos = real;
        int round = 1;
        swap(pos[a - 1], pos[b - 1]);
        for (int k = 2; k <= n; k++)
        {
            if (pos[k] < pos[k - 1])
            {
                round++;
            }
        }
        cout << round << endl;
    }
    return 0;
}
