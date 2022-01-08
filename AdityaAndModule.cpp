#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> vec(n);
        for(int i=0;i<n; ++i){
            cin>>vec[i];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;++i){
            mp[vec[i]%m]++;
        }
        
        int un=0,dis=0;
        for(auto x:mp){
            if(x.second==1) un++;
            if(x.second>0) dis++;
        }
        cout<<dis<<endl<<un<<endl;
    }
    return 0;
}
