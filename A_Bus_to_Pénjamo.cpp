#include <bits/stdc++.h>
using namespace std;

void slove()
{
    int n,r;
    cin >> n >> r;
    vector<int> num(n + 1, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum+=num[i];
    }
    int SUM_L=2*r-sum;//空位
    int MAX_happy=0;
    //一共只有r行
    for(int i=0;i<n;i++){
        if(num[i]%2==0){
            MAX_happy+=num[i];
            r-=(num[i]/2);
        }else{
            if(SUM_L<=0) MAX_happy--;
            MAX_happy+=num[i];
            r-=(num[i]/2);
            SUM_L--;
        }
    }
   // cout<<r<<" "<<MAX_happy<<" "<<SUM_L<<endl;
    cout<<(MAX_happy)<<endl;

}
int main()
{
    int t;
    cin >> t;
    while (t--)
        slove();
    return 0;
}