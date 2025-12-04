#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ans=0;
cin>>n;
while(n--){
    string st;
    cin>>st;
    if(st=="++X" || st=="X++")
    ans++;
    else
    ans--;
}
    cout<<ans;
    return 0;
}
