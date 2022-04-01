#include<bits/stdc++.h>
using namespace std;

const int N=15;
int n;
int w[N][N],f[2*N][N][N];

int main(){
    cin>>n;
    int a,b,c;
    while(cin>>a>>b>>c,a||b||c) w[a][b]=c;
    for(int k=2;k<=2*n;k++){
        for(int i1=1;i1<=n;i1++){
            for(int i2=1;i2<=n;i2++){
                int j1=k-i1,j2=k-i2;
                int ww=w[i1][j1];
                if(i1!=i2) ww+=w[i2][j2];
                int &x=f[k][i1][i2];
                x=max(x,f[k-1][i1-1][i2-1]+ww);
                x=max(x,f[k-1][i1][i2-1]+ww);
                x=max(x,f[k-1][i1-1][i2]+ww);
                x=max(x,f[k-1][i1][i2]+ww);
            }
        }
    }
    cout<<f[2*n][n][n]<<endl;
}