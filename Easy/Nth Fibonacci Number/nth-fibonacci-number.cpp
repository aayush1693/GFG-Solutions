//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  const int val=1000000007;
    int nthFibonacci(int n){
        // code here
        // int i=0;
        vector<int> fib(n+1);
        fib[0]=0;
        fib[1]=1;
        for(int i=2; i<=n;i++ ){
            fib[i]=(fib[i-1]%val+fib[i-2]%val)%val;
        }
        long int ans= fib[n];
        return ans;
        // return fib[n];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends