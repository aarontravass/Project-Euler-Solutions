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

ll get(ll n){
    unordered_map<ll,ll> mp;
    while(n%2==0){
        mp[2]++;
        n/=2;
    }
    for(ll i=3;i*i<=n;i+=2){
        if(n%i==0){
            while(n%i==0){
                mp[i]++;
                n/=i;
            }
        }
    }
    if(n>1) mp[n]++;
    return mp.size();

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
        vector<ll> val;
        for(ll i=100000;i<=999999;i++){
            val.push_back(get(i));
                //cout<<val.back()<<endl;
            if(val.size()>10)
               if(val[val.size()-1]==4 && val[val.size()-2]==4 && val[val.size()-3]==4 && val[val.size()-4]==4){
                cout<<i-3<<endl;
                break;
            }
        }









        auto t2=time;
        cout<<"Time: "<<lapsed(t2,t1)<<endl;


    }


    return 0;
}
