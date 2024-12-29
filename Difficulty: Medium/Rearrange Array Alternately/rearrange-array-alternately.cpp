//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void rearrange(vector<int>& arr) {

        // Your code here
        sort(arr.begin(), arr.end());
        int start=0;
        int end=arr.size()-1;
        vector<int>res;
        while(start<=end){
            if(start!=end){
                res.push_back(arr[end]);
                res.push_back(arr[start]);
            }else{
                res.push_back(arr[start]);
            }
            end--;
            start++;
        }
        arr=res;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends