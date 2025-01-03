//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    const int MOD = 1000000007;

    int getSum(vector<int>& arr) {
        // write code here
        int n = arr.size();
    
    long long fact = 1;
    for (int i = 1; i < n; ++i) {
        fact = (fact * i) % MOD;
    }

    long long positionSum = 0;
    long long powerOfTen = 1;
    for (int i = 0; i < n; ++i) {
        positionSum = (positionSum + powerOfTen) % MOD;
        powerOfTen = (powerOfTen * 10) % MOD;
    }

    long long digitSum = 0;
    for (int i = 0; i < n; ++i) {
        digitSum = (digitSum + arr[i]) % MOD;
    }

    long long result = (digitSum * fact % MOD) * positionSum % MOD;

    return result;
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
        cout << obj.getSum(arr) << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends