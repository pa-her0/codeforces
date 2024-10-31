#include<bits/stdc++.h>
using namespace std;

bool cmp(int p1,int p2){
    return p1>p2;
}
void slove(){
    string a;
    cin>>a;
    int A[27]={0};
    for(int i=0;i<a.size();i++){
        A[a[i]-'a']++;
    }
    sort(A,A+27,cmp);
    cout<<a.size()-A[0]<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) slove();
    return 0;
}