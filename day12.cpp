#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d=n/2;
        if(d%2==1)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=d;i++){
              cout<<2*i<<" ";  
            }
            for(int i=1;i<d;i++){
                cout<<2*i-1<<" ";
            }
            cout<<3*d-1<<endl;
        }
    }
    return 0;
}