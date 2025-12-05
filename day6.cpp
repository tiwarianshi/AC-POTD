#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        int count=0; //use to count no. of pair
        string ans="";
        vector<int>vec(26,0);
        for(int i=0;i<str.size();i++){
            vec[str[i]-'a']++;
        }
        for(int el:vec){
            if(el>=2) count++;
        }
        if(count>=2) ans="YES";
        else ans="NO";
        cout<<ans<<endl;
    }
    
    return 0;
}