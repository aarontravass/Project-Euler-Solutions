#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ld long double
#define ull unsigned long long int
#define forn(i,n)for(ll i=0;i<(n);i++)
#define forn_rev(i,n)for(ll i=(n)-1;i>=0;i--)
#define for1n(i,n) for(ll i=1;i<=(n);i++)
#define ARRAY_SIZE(a) sizeof(a)/sizeof(*a)
#define MOD 1000000007
#define MAXN 1005
#define PI 3.1415926535897932384626433

using namespace std;




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    //memset(visited,0,sizeof visited);
    ll T=1;
    //cin>>T;
    while(T--)
    {

        vector<ll> coins={1,2,5,10,20,50,100,200};
        ll dp[201]={0};

        dp[0]=1;
        for(ll i=0;i<coins.size();i++){
            for(ll j=coins[i];j<=200;j++){
                dp[j]+=dp[j-coins[i]];
            }
        }
        cout<<dp[200];


    }


    return 0;
}
