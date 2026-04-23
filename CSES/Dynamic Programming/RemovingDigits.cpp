#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        int m = n;
        int max_element = 0;
        while (m > 0)
        {
            max_element = (m % 10 >= max_element) ? (m % 10) : max_element;
            m /= 10;
        }
        n -= max_element;
        count++;
    }
    cout << count << endl;
    return 0;
}