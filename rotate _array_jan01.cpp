// program of rotating array clockwise by Harsh Narayan
#include <bits/stdc++.h>
using namespace std;

//reverse a subarray from i to j
void reverse(vector<int> &vec, int i, int j){
    while(i<j){
        int t = vec[i];
        vec[i] = vec[j];
        vec[j] = t;
        
        i++; j--;
    }
}

int main() {
	int t;
	cin>>t;
    //no of testcases
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    d%=n; // if the value of d is greater than n it will practically loop around the array 
	    vector<int> vec(n);
	    for(int i=0;i<n; ++i){
	        cin>>vec[i];
	    }
	    
        /*
        if the array is [3,4,5,6,7] and d=2
        first we reverse the entire array -> [7,6,5,4,3]
        then reverse n-d element from left -> [5,6,7,4,3]
        then reverse d ele from right -> [5,6,7,3,4]
        */
	    reverse(vec,0,n-1);
	    reverse(vec,0,n-d-1);
	    reverse(vec,n-d,n-1);
	    
	    for(int i=0;i<n; ++i){
	        cout<<vec[i]<<' ';
	    }

	    cout<<endl;   
	}
	return 0;
}