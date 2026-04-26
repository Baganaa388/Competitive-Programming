#include <bits/stdc++.h>
using namespace std;

int n;

string to_binary(int number)
{
    int res[n] = {0};
    int i = 0;
    while (number > 0)
    {
        res[i] = (number % 2);
        number /= 2;
        i++;
    }
    string result;
    for (int i = n - 1; i >= 0; i--)
    {
        if (res[i] == 0)
        {
            result.push_back('0');
        }
        else
        {
            result.push_back('1');
        }
    }
    return result;
}

int main()
{
    cin >> n;
    vector<string> bit;
    for (int i = 0; i < pow(2, n); i++)
    {
        bit.push_back(to_binary(i));
        // cout << bit[i] << endl;
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int res = INT_MAX;
    for (auto x : bit)
    {
        long long int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == '0')
            {
                sum1 += a[i];
            }
            else
            {
                sum2 += a[i];
            }
        }
        res = min(res, abs(sum1 - sum2));
    }
    cout << res << endl;
}