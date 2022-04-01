#include<bits/stdc++.h>
using namespace std;

const int N=110;
int n;
int w[N][N],f[N][N];
int row,col;


int main(){
    cin>>n;
    while(n--){
        cin>>row>>col;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                cin>>w[i][j];
            }
        }
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                f[i][j]=max(f[i-1][j]+w[i][j],f[i][j-1]+w[i][j]);
            }
        }
        cout<<f[row][col]<<endl;
    }
    
}