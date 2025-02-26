//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    //Function to find factorial numbers less than or equal to N.
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> ans;
        long long int fact = 1;
        int x = 2;

        //Iterating until factorial is less than or equal to N.
        while (fact <= N)
        {
            //Adding factorial to the answer list.
            ans.push_back(fact);

            //Calculating next factorial by multiplying with next number.
            fact = fact * x;
            x++;
        }
        //Returning the list of factorial numbers.
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends