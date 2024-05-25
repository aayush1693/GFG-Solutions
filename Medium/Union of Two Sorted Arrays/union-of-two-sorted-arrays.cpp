//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        vector<int> ans(n+m);
        int j=0;
        unordered_set<int> contains(n+m);
        for(int i=0; i<n;i++){
            if(contains.find(arr1[i])==contains.end()){
                contains.insert(arr1[i]);
                ans[j++]=arr1[i];
            }
        }
        
        for(int i=0; i<m;i++){
            if(contains.find(arr2[i])==contains.end()){
                contains.insert(arr2[i]);
                ans[j++]=arr2[i];
            }
        }
        vector<int> real(j);
        for(int i=0; i<j;i++){
            real[i]=ans[i];
        }
        //return vector with correct order of elements
        sort(real.begin(),real.end());
        return real;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends