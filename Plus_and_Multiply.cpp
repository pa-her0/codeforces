#include <bits/stdc++.h>
using namespace std;
// YOLO
void solve()
{
    long long n, a, b;
    cin >> n >> a >> b;
    bool falg = false;
    long long temp = a;
    if ((n - 1) % b == 0)
    {
        cout << "Yes" << endl;
        return;
    }
    while (a != 1 && a <= n)
    {
        if (((n - a) % b == 0))
        {
            falg = true;
            break;
        }
        a *= temp;
    }
    if (falg)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
