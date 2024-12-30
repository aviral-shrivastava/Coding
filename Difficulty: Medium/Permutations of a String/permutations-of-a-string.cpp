//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  void solve(string &s, vector<string> &ans, int index) {
        int n = s.size();
        // Base case: If index reaches the end, add the permutation to the result.
        if (index >= n) {
            ans.push_back(s);
            return;
        }

        // Generate permutations by swapping characters from index to n-1.
        for (int j = index; j < n; j++) {
            swap(s[j], s[index]); // Swap to create a new permutation.
            solve(s, ans, index + 1); // Recurse for the next index.
            swap(s[j], s[index]); // Backtrack to restore the original string.
        }
    }
    
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        solve(s, ans, 0);

        // Use a set to remove duplicates
        set<string> uniquePermutations(ans.begin(), ans.end());

        // Transfer unique permutations back to the vector
        ans.assign(uniquePermutations.begin(), uniquePermutations.end());

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends