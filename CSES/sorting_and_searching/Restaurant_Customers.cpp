#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<pair<int, int>> events;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());

    int result = 0;
    int maxx = INT_MIN;
    for (auto x : events)
    {
        result += x.second;
        maxx = max(result, maxx);
    }
    cout << maxx << endl;
}