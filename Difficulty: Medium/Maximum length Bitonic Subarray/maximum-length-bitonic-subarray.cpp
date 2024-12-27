//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int bitonic(vector<int> &arr) {
        // code here
        int n=arr.size();
        int inc[n]={0};
        int dec[n]={0};
        int count1=1;
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                inc[i]=count1++;
            }
            else{
                count1=1;
            }
        }
        count1=1;
        for(int i=n-2;i>=0;i--){
            if(arr[i+1]<=arr[i]){
                dec[i]=count1++;
            }
            else{
                count1=1;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,inc[i]+dec[i]+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.bitonic(arr);
        cout << ans << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends