//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // void helper(long long n, long long& sum){
    //     if(n==0)
    //         return;
    //     sum=sum+pow(n,3);
    //     n--;
    //     helper(n,sum);
    // }
    // long long sumOfSeries(long long n) {
    //     long long sum=0;
    //     helper(n,sum);
    //     return sum;
    // }
    long long sumOfSeries(long long n){
        // long long sum=0;
        // for(int i=1; i<=n;i++){
        //     sum=sum+pow(i,3);
        // }
        long long sum=(n*n*(n+1)*(n+1))/4;
        // long long sum=pow(x,2);
        return sum;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends