#include<bits/stdc++.h>
using namespace std;
/*
--------------------------------------------------------
--------------------------------------------------------
这份代码是O(N^2),洛谷上的侧例无法全部通过，需要优化为NlogN;
--------------------------------------------------------
--------------------------------------------------------
*/
int n;
typedef pair<int,int> PALL;
PALL p[200010];
int f[200010];

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        f[i]=1;
        for(int j=0;j<i;j++)
            if(p[i].second>p[j].second) f[i]=max(f[i],f[j]+1);
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=max(res,f[i]);
    }
    cout<<res<<endl;
}