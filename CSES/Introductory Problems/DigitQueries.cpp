#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string result = "";
    for (int i = 1; i <= 10000; i++)
    {
        result += (to_string(i));
    }
    cin >> t;
    while (t--)
    {
        unsigned int number;
        cin >> number;
        cout << result[number - 1] << endl;
    }

    // cout << t;

    return 0;
}