// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std; 

int PerfectMatch(vector<int> arr, int n)  ;


 // } Driver Code Ends
//User function Template for C++

int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        int k = n % 10;
        sum += k;
        n = n / 10;
    }
    return sum;
}

int PerfectMatch(vector<int> arr, int n) 
{
    if (arr.size() < 2)
        return -1;
    map <int, int> m;
    for (auto i : arr) {
        m[i] = digitSum(i);
    }

    cout << "mSIze" << m.size() << endl;
    int max = -1, temp = 1000000, prev;
    for (auto i : m) {
        if (i.second == temp) {
            int pp = i.first + prev;
            if (max < pp)
                max = pp;
            temp = i.second;
            prev = i.first;
        } else {
            temp = i.second;
            prev = i.first;
        }
    }
    
    return max;
    
}

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		cout << PerfectMatch(arr,n)<<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends