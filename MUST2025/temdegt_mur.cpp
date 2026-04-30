#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        int n = s.size();

        set<string> seen;

        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i; j < n; j++)
            {
                if (!isVowel(s[j]))
                    cnt++;
                if (cnt > k)
                    break;
                seen.insert(s.substr(i, j - i + 1));
            }
        }

        cout << seen.size() << "\n";
    }
    return 0;
}