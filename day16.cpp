#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%21==0){
            cout<<"The streak is broken!"<<endl;
            continue;
        }
        bool isone=false, istwo=false;
        while(n){
            if(n%10==1) isone=true;
            else if(n%10==2 and isone) istwo=true;
            else isone=false;
            n/=10;
            if(isone and istwo) break;
        }
        if(isone and istwo)
            cout<<"The streak is broken!"<<endl;
        else
            cout<<"The streak lives still in our heart!"<<endl;
    }
    return 0;
}
