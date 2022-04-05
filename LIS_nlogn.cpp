#include<bits/stdc++.h>
using namespace std;

const int N=1010;
int n;
int a[N],g[N];

int main(){
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int l=0,r=cnt,k=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(mid&&g[mid]>=a[i]&&g[mid-1]<a[i]) {k=mid;break;}
            else if(g[mid]<a[i]) l=mid+1;
            else r=mid;
        }
        g[k]=a[i];
        if(k>=cnt) cnt++;
    }
}
