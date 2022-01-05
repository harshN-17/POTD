<<<<<<< HEAD
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    
    void swap(int *a, int i, int j){
        int t=a[i];
        a[i] = a[j];
        a[j] = t;
    }
    
    void sort012(int a[], int n)
    {
        // coode here 
        int i=0, j=0, k=n-1;
        while(j<=k){
            if(a[j]==0){
                swap(a,i,j);
                i++; j++;
            }
            
            else if(a[j]==1){
                j++;
            }
            
            else if(a[j]==2){
                swap(a,k,j);
                k--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
||||||| 590d35e
=======
#include<bits/stdc++.h>
using namespace std;

string solve (int N) {
   // Your code goes here
    if(N<4) return "No";

    for(int i=2; i<=sqrt(N); ++i){
        if(N%i==0) return "Yes";
    }

    return "No";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;

        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}
>>>>>>> 2f0b26d5907e755a01f3976d63e44e2a87fbe484
