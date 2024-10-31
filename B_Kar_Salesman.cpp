#include<bits/stdc++.h>
using namespace std;

bool cmp(int p1,int p2){
    return p1>p2;
}
void slove(){
    int n,x;
    cin>>n>>x;
    vector<int>a(n,0);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end(),cmp);
    //每次一个区间
}
int main(){
    int t;
    cin>>t;
    while(t--) slove();
    return 0;
}