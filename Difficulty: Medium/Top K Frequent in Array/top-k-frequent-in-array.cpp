//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        // Code here
        unordered_map<int,int>mpp;
      for(int i = 0;i<arr.size();i++)
         mpp[arr[i]]++;
        
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            pq.push({it->second,it->first});
        }
        
        while(ans.size()<k){
            ans.push_back(pq.top().second);
            pq.pop();
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

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.topKFrequent(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends