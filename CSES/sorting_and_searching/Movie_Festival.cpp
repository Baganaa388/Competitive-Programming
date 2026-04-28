#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        movies.push_back({b, a});
    }
    sort(all(movies));

    // for (auto x : movies)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    int last_end = INT_MIN;
    int result = 0;
    for (auto x : movies)
    {
        if (x.second >= last_end)
        {
            result++;
            last_end = x.first;
        }
    }
    cout << result << endl;
}