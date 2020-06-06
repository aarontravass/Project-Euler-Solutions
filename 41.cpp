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
#define MAXN 1000005
#define PI 3.1415926535897932384626433
#define gcd(a,b) __gcd(a,b)
#define lapsed(t2,t1) chrono::duration_cast<chrono::milliseconds>(t2-t1).count()
#define time Clock::now()
typedef std::chrono::high_resolution_clock Clock;

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


bool isprime(ll n)
{
    if(n%2==0) return 0;
    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;

}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    ll T=1;
    //cin>>T;
    while(T--)
    {
        auto t1=time;
        vector<ll> arr;
        string n="";
        for1n(i,7){
            n+=to_string(i);
            do
            {
                arr.push_back(stoll(n));
            }
            while(next_permutation(n.begin(),n.end()));
        }

        ll ans=0;
       // cout<<arr.size()<<endl;
        forn(i,arr.size())
        {
            if(isprime(arr[i]))
            {
                ans=max(ans,arr[i]);
            }
        }
        cout<<ans;









        auto t2=time;
        cout<<endl<<"Time lapsed: "<<lapsed(t2,t1)<<endl;


    }


    return 0;
}
