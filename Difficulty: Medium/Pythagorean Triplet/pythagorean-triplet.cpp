//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function to check if the
    // Pythagorean triplet exists or not
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int n=arr.size();
       int maxi=-1;
      for(int i=0;i<n;i++)
      {
      maxi=max(maxi,arr[i]);
          
      }
       vector<int>visit(maxi+1,0);
       for(int i=0;i<n;i++)
       visit[arr[i]]=1;
     
       for(int i=1;i<=maxi;i++)
       {
           if(visit[i]==false)
           continue;
           
           for(int j=1;j<=maxi;j++)
           {
           if(visit[j]==false)
           continue;
            int c=sqrt(i*i+j*j);
            
            if(c*c!=i*i+j*j||c>maxi)
            continue;
            
            if(visit[c]==true)
            return true;
           }
       }
       
       return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.pythagoreanTriplet(arr);
        if (ans) {
            cout << "true\n";
        } else {
            cout << "false\n";
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends