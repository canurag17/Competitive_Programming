// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	multiset<pair<int, char>> events;
    	int platforms=0;
    	int result=0;
    	for(int i=0;i<n;i++)
    	{
    	    events.insert({arr[i],'a'});
    	    events.insert({dep[i],'d'});
    	}
    	for(pair<int,char> it: events)
    	{
    	    if(it.second=='a')
    	    platforms++;
    	    else
    	    platforms--;
    	    result=max(result,platforms);
    	}
    	return result;
    	
    	
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends