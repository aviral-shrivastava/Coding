//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // code here
        // Step 1: Convert integers to strings
        vector<string> strArr;
        for (int num : arr) {
            strArr.push_back(to_string(num));
        }

        // Step 2: Sort using a custom comparator
        sort(strArr.begin(), strArr.end(), [](string &a, string &b) {
            return a + b > b + a; // Concatenate and compare
        });

        // Step 3: Edge case: If the largest number is "0", return "0"
        if (strArr[0] == "0") return "0";

        // Step 4: Concatenate the strings to form the result
        string result = "";
        for (string &s : strArr) {
            result += s;
        }

        return result;
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
        string ans = ob.findLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends