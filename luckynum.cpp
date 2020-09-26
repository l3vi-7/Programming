#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n;
    cin>>n;
    bool flag=0;
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    for(int i=0;i<12;i++){
        if(n%arr[i]==0){
            flag=true;
        }
    }
    if(flag)
    cout<<"YES";
    else
        cout<<"NO";
    return 0;
}