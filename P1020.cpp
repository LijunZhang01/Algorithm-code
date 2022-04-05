#include<bits/stdc++.h>
using namespace std;

const int N=100010;
int f[N],a[N],g[N];

int main(){
    int p=0;
    int res=0,res1=0;
    do{
        cin>>a[p++];
    }while(getchar()!='\n');
    for(int i=p-1;i>=0;i--){
        f[i]=1;
        g[i]=1;
        for(int j=p-1;j>i;j--){
            if(a[i]>=a[j]) f[i]=max(f[i],f[j]+1);
            if(a[i]<a[j]) g[i]=max(g[i],g[j]+1);
        }
        res=max(res,f[i]),res1=max(res1,g[i]);
    }
    cout<<res<<endl<<res1<<endl;
}