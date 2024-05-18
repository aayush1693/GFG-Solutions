//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> ans(2);
        
        long long gcd=GCD(A,B);

        long long lcm = A*B/gcd;
        // ans.push_back(lcm);
        // ans.push_back(gcd);
        ans[0]=lcm;
        ans[1]=gcd;
        return ans;
    }
    long long GCD(long long A, long long B){
        return B==0? A: GCD(B, A%B);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends