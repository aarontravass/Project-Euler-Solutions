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
#define MAXN 100005
#define PI 3.1415926535897932384626433
#define gcd(a,b) __gcd(a,b)
using namespace std;

ll power(ll x,ll y,ll p)
{
    ll res=1;
    x=x%p;
    if(x==0)
        return 0;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}

bool check(ll i,ll j){
    string n=to_string(i),d=to_string(j);
    if((d[1]-'0')*i==j*(n[0]-'0') && n[1]==d[0]) return true;
    return false;


}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    //memset(visited,0,sizeof visited);
    ll T=1;
    //cin>>T;
    while(T--)
    {
        vector<pair<ll,ll>> ans;
        for(ll i=10;i<=99;i++){
            for(ll j=10;j<=99;j++){
                if(i<j){
                    if(check(i,j)) ans.push_back({i,j});
                }
            }

        }
        ll num=1,den=1;
        for(auto x:ans){
            num*=x.first;
            den*=x.second;
        }
        cout<<den/gcd(num,den);



    }


    return 0;
}
