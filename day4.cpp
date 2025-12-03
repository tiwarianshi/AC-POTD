#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int key=vec[k-1];
    int ans=0;
    for(int i=0;i<n;i++){
        if(vec[i]>=key && vec[i]>0)
        ans++;
    }
    cout<<ans;

    return 0;
}