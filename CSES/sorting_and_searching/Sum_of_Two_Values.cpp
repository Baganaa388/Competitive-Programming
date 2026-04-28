#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> numbers;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        numbers.push_back({temp, i});
    }
    sort(all(numbers));
    int l = 0, r = n - 1;
    while (l < r)
    {
        int temp = numbers[l].first + numbers[r].first;
        if (temp == x)
        {
            cout << numbers[l].second + 1 << " " << numbers[r].second + 1 << endl;
            return 0;
        }
        else if (temp < x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}