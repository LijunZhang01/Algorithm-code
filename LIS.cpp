#include<bits/stdc++.h>
using namespace std;

int n;
int f[100010],a[100010];

int main(){
    while(cin>>n,n){
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            f[i]=a[i];
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    f[i]=max(f[i],f[j]+a[i]);
                }
            }
        }
        int res=0;
        for(int i=0;i<n;i++) res=max(res,f[i]);
        cout<<res<<endl;
    }
    
    
}