#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // test
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    // cout << "target : ";
    cin >> target;
    sort(all(a));
    int count = 0;
    int mid;
    int l = 0, r = n;
    while (l <= r)
    {
        count++;
        mid = (r + l) / 2;
        if (a[mid] > target)
        {
            r = mid - 1;
        }
        else if (a[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            cout << "found xD " << count;
            break;
        }
    }
}