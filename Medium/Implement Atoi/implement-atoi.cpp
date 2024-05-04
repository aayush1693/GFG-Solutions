//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // Function to check if a character is a numeric character
    bool isNumericChar(char x) {
        return (x >= '0' && x <= '9')? true: false;
    }
    
    // Function to convert string to integer
    int atoi(string s)
    {
        int n = s.size();
        if (s == "")
            return 0;
      
        int res = 0;  
        int sign = 1;  
        int i = 0; 
      
        // Check for negative sign
        if (s[0] == '-')
        {
            sign = -1;
            i++;  
        }
      
        // Convert each character to integer and calculate the result
        for (; i < n; ++i)
        {
            if (isNumericChar(s[i]) == false)
                return -1; 
            res = res * 10 + s[i] - '0';
        }
      
        // Return result with sign
        return sign * res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		int ans=ob.atoi(s);
		cout<<ans<<endl;
	}
}
// } Driver Code Ends