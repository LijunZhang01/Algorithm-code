#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int bmp[1000010];

void get_bmp(){
    for(int i=1,j=0;i<s2.length();i++){
            while(j&&s2[i]!=s2[j]) j=bmp[j-1];
            if(s2[i]==s2[j]) j++;
            bmp[i]=j; 
        }
}
void kmp(){
    for(int i=0,j=0;i<s1.length();i++){
            while(j&&s1[i]!=s2[j]) j=bmp[j-1];
            if(s1[i]==s2[j]) j++;
            if(j==s2.length()){
                cout<<i-j+2<<endl;
                j=bmp[j-1];
            } 
        }
}

int main(){
    cin>>s1>>s2;
    get_bmp();
    kmp();
    for(int i=0;i<s2.length();i++){
        cout<<bmp[i]<<' ';
    }
}