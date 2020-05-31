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



bool check(ll i){
    string num=to_string(i);

    forn(j,num.size()) {
        if(num[j]!=num[num.size()-j-1]) return false;

    }
    return true;



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
        clock_t start;
        start=clock();

        ll ans=0;

        for(ll i=999;i>=100;i--){
            for(ll j=990;j>=100;j--){
                if(check(i*j)){
                    ans=max(ans,i*j);
                }
            }
        }

        cout<<ans<<endl;


        cout<<(clock()-start)/(double) CLOCKS_PER_SEC;



    }


    return 0;
}
