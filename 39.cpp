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

ll geta(ll m,ll n,ll k){
    return k*(m*m - n*n);
}

ll getb(ll m,ll n,ll k){
    return k*m*n;
}

ll getc(ll m,ll n,ll k){
    return k*(m*m + n*n);
}

ll getsum(ll m,ll n,ll k){
    return 2*k*m*(m+n);
}

bool visited[1000][1000][1000];
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    ll T=1;
    //cin>>T;
    while(T--)
    {
        memset(visited,0,sizeof visited);
        vector<ll> sum(1001,0);
        for(ll m=1;m<=15;m++){
            for(ll n=1;n<m;n++){
                ll k=1;
                while(getsum(m,n,k)<=1000){
                    if(!visited[geta(m,n,k)][getb(m,n,k)][getc(m,n,k)]){
                        sum[getsum(m,n,k)]++;
                        visited[geta(m,n,k)][getb(m,n,k)][getc(m,n,k)]=1;
                    }
                    k++;
                }

            }
        }

        pair<ll,ll> ans={0,0};
        forn(i,sum.size()) if(sum[i]>ans.first) ans={sum[i],i};
        cout<<ans.second;

    }


    return 0;
}
