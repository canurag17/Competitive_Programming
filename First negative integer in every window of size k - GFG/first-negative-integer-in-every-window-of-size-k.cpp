// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends



vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k) {
    int i=0;
    vector<long long> v;
    deque<long long> d;
    while(i<k)
    {
        if(A[i]<0)
        {
            d.push_back(i);
        }
        i++;
    }
    if(!d.empty())
    v.push_back(A[d.front()]);
    else
    v.push_back(0);
    while(i<n)
    {
        if(A[i]<0)
            d.push_back(i);
        while(!d.empty() && i-d.front()>=k)
            d.pop_front();
        if(d.empty())
            v.push_back(0);
        else
            v.push_back(A[d.front()]);
        i++;
    }
    return v;
 }