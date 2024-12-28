//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<pair<int,int>>p;
        vector<int>v;
        map<int,int>cnt;
        for(auto u:arr) cnt[u]++;
        for(auto u:cnt){
           int sz=u.second;
            for(int i=1;i<=sz;i++){
                p.push_back({u.second,u.first*(-1)});
            }
        }
        sort(p.rbegin(),p.rend());
        for(auto u:p){
            v.push_back(u.second*(-1));
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends