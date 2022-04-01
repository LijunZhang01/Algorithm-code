#include<bits/stdc++.h>
using namespace std;

const int N=1010;
int a[N][N];
int f[N][N];
int n;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            f[i][j]=max(f[i-1][j]+a[i][j],f[i-1][j-1]+a[i][j]);
        }
    }
    
    int max1=0;
    for(int i=1;i<=n;i++){
        if(f[n][i]>max1){
            max1=f[n][i];
        }
    }
    cout<<max1<<endl;
}