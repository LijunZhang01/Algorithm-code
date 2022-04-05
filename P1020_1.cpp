#include<bits/stdc++.h>
using namespace std;

const int N=100010;
int f[N],a[N],g[N];

int main(){
    int p=0;
    int res=0,res1=0;
    while(cin>>a[p]) p++;
    for(int i=p-1;i>=0;i--){
        f[i]=1;
        for(int j=p-1;j>i;j--){
            if(a[i]>=a[j]) f[i]=max(f[i],f[j]+1);
        }
        res=max(res,f[i]);
    }
    cout<<res<<endl;
    int cnt=0;
    for(int i=0;i<p;i++){
        int k=0;
        while(k<cnt&&g[k]<a[i]) k++;
        g[k]=a[i];
        if(k>=cnt) cnt++; 
    }
    cout<<cnt<<endl;
}