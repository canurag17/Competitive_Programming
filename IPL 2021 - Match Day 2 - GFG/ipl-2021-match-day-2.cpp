// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int> d;
        int i=0,j=0;
        vector<int> ans;
        int mx_index=0;
        while(j<n)
        {
            while(!d.empty() && arr[j]>=arr[d.back()])
            {
                d.pop_back();
            }
            d.push_back(j);
            if(j-i+1<k)
            j++;
            else if(j-i+1==k)
            {
                ans.push_back(arr[d.front()]);
                if(d.front()==i)
                d.pop_front();
                j++;
                i++;
            }
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends