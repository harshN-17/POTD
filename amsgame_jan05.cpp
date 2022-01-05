#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    
    return gcd(b, a%b);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n; ++i)
        cin>>vec[i];

        int ans = vec[0];
        for(int i=1; i<n;++i){
            ans = gcd(ans,vec[i]);
        }        

        cout<<ans<<endl;
    }
    
    return 0;
}