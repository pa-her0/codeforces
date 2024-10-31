#include<bits/stdc++.h>
using namespace std;


void slove(){
     int n;
     cin>>n;
     vector<int>a(n+1,0);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int q=1,p=1;
     bool temp=false;
     for(int i=0;i<n;i++){
          if(a[i]==1){
           p++;q++;
          }else if(a[i]==-1){
           if(p<=1){
               cout<<"-1"<<endl;
               return ;
           }
           p--;
          }else if(a[i]==0){
           if(p<=1){
               p++;q++;
           }else{
               p--;
           }
          }
     }
     cout<<q<<" "<<p<<endl;
     
} 

int main(){
   int t;
   cin>>t;
   while(t--) slove();

    return 0;
}