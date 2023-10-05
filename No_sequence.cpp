
// C++ program to count all subsets with
// given sum.
#include <bits/stdc++.h>
using namespace std;
 
// dp[i][j] is going to store true if sum j is
// possible with array elements from 0 to i.
bool** dp;
 
void display(const vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i)
        cout<<v[i]<<" ";
    cout<<endl;
}
 
// A recursive function to print all subsets with the
// help of dp[][]. Vector p[] stores current subset.
void printSubsetsRec(vector<int> arr, int i, int sum, vector<int>& p)
{
    // If we reached end and sum is non-zero. We print
    // p[] only if arr[0] is equal to sum OR dp[0][sum]
    // is true.
    if (i == 0 && sum != 0 && dp[0][sum])
    {
        p[i]=(arr[i]);
        // Display Only when Sum of elements of p is equal to sum
          if (arr[i] == sum)
              display(p);
        return;
    }
 
    // If sum becomes 0
    if (i == 0 && sum == 0)
    {
        display(p);
        return;
    }
 
    // If given sum can be achieved after ignoring
    // current element.
    if (dp[i-1][sum])
    {
        // Create a new vector to store path
        vector<int> b=p;
        printSubsetsRec(arr, i-1, sum, b);
    }
 
    // If given sum can be achieved after considering
    // current element.
    if (sum >= arr[i] && dp[i-1][sum-arr[i]])
    {
        p[i]=(arr[i]);
        printSubsetsRec(arr, i-1, sum-arr[i], p);
    }
}
 
// Prints all subsets of arr[0..n-1] with sum 0.
void printAllSubsets(vector<int> arr, int n, int sum)
{
    if (n == 0 || sum < 0)
       return;
 
    // Sum 0 can always be achieved with 0 elements
    dp = new bool*[n];
    for (int i=0; i<n; ++i)
    {
        dp[i] = new bool[sum + 1];
        dp[i][0] = true;
    }
 
    // Sum arr[0] can be achieved with single element
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;
 
    // Fill rest of the entries in dp[][]
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < sum + 1; ++j)
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] ||
                                       dp[i-1][j-arr[i]]
                                     : dp[i - 1][j];
    if (dp[n-1][sum] == false)
    {
        cout<<-2<<endl;
        return;
    }
 
    // Now recursively traverse dp[][] to find all
    // paths from dp[n-1][sum]
    vector<int> p(n,0);
    printSubsetsRec(arr, n-1, sum, p);
}
 
int main() {
	int t,c=0;cin>>t;
	while(t--){
	    int n,k,s;cin>>n>>k>>s;
	    vector<int> arr(2*n,0);
	    int a=1;
	    for(int i=0;i<n;i++){
	        arr[i]=a;
	        a*=k;
	    }
        a=-1;
	    for(int i=n;i<2*n;i++){
	        arr[i]=a;
	        a*=k;
	    }
        // display(arr);
        printAllSubsets(arr,2*n,s);
	    // cout<<a<<" "<<b<<" "<<c<<endl;
	}
	
	return 0;
}
