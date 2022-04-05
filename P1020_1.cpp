#include<bits/stdc++.h>
using namespace std;

const int N=100010;
int a[N],f[N],g[N];
int n,cnt,cnt1;

int main(){
    while(cin>>a[n]) n++;
    f[0]=2e-9,g[0]=2e-9;
    for(int i=n-1;i>=0;i--){
        int l=0,r=cnt;
        while(l<r){
            int mid=l+r+1>>1;
            if(f[mid]<=a[i]) l=mid;
            else r=mid-1;
        }
        f[l+1]=a[i];
        cnt=max(cnt,l+1);
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++){
        int l=0,r=cnt1;
        while(l<r){
            int mid=l+r+1>>1;
            if(g[mid]<a[i]) l=mid;
            else r=mid-1;
        }
        g[l+1]=a[i];
        cnt1=max(cnt1,l+1);
    }
    cout<<cnt1<<endl;
}