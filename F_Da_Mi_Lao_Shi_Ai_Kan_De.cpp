#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int n;
        vector<string> ans;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            int p = 0;
            for (int i = 0; i < a.length(); i++)
            {
                for (int j = i; j < a.length(); j++)
                {
                    if (a.substr(i, j) == "bie" && mp[a] == 0)
                    {
                        mp[a]++;
                        ans.push_back(a);
                        p = 1;
                        break;
                    }
                }
                if (p)
                    break;
            }
        }
        if (ans.size() == 0)
        {
            cout << "Time to play Genshin Impact, Teacher Rice!" << endl;
        }
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << endl;
            }
        }
    }

    return 0;
}