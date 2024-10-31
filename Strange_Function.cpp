#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll lcm(ll a, ll b)
{ // 最大公倍数
    return a * (__gcd(a, b)) * b;
}

const long long MOD = 1e9 + 7;
// 1e16的最大公倍数 41
int main()
{
    // 打表
    // int n;
    // cin >> n;
    // bool tem=false;
    // long long sum=0;
    // int cnt=1;
    // for(int i=55;i<=n;i++){
    // tem=false;
    //     for(int j=1;j<i;j++){
    //         if(i%j!=0&&((i+5)/6)%10==0){
    //             cout << j <<" ";
    //             tem=true;
    //             break;
    //         }

    //     }
    // }
    int t;
    cin >> t;
    // 预处理
    vector<long long> lcm_ve(42, 1);
    for (int i = 2; i <= 41; i++)
    {
        lcm_ve[i] = lcm(lcm_ve[i - 1], i);
    }
    while (t--)
    {
        long long n;
        cin >> n;
        long long result = 0;
        if (n == 1)
        {
            result = 2;
        }
        else
        {
            for (int x = 2; x <= 41; x++)
            {
                long long count = (n / lcm_ve[x - 1] - n / lcm_ve[x]);
                result = (result + count * (x )) % MOD;
                if (lcm_ve[x] > n)
                    break;            
            }
        }
        cout << result << endl;
    }

    return 0;
}