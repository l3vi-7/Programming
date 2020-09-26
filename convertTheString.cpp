#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--) {
        bool flag1 = true;
        string A,B;
        ll n;
        cin>>n;
        cin>>A>>B;

        int mp1[256] {0};
        map<char,vector<ll> > mp2;
        for(ll i=0;i<n;i++)
            mp1[A[i]]=i+1;
        for(ll i=0;i<n;i++)
            mp2[B[i]].push_back(i);
    
        ll flag2=0;
        ll cnt=0;
        vector<vector<ll> > ans;
        for(char ch='z';ch>='a';ch--){
            vector<ll> stk;
            vector<ll> arr1=mp2[ch];

            for(ll i=0;i<arr1.size();i++){
                if(A[arr1[i]]<B[arr1[i]] || mp1[ch]==0)
                    cout<<-1<<endl;flag1=0;break;
                if(A[arr1[i]] == B[arr1[i]])
                    continue;
                stk.push_back(arr1[i]);
            }

            if(flag1 && stk.size()!=0){
                stk.push_back(mp1[ch]-1);
                ans.push_back(stk);
            }

            if(flag1==0)break;
        }

        if(flag1)
            cout<<ans.size()<<endl;

        if(flag1)
            for(ll i=0;i<ans.size();i++){
                cout<<ans[i].size()<<" ";
                for(auto it=ans[i].begin();it!=ans[i].end();it++)
                cout<<*it<<" ";
                cout<<endl;
            }
    }
    return 0;
}