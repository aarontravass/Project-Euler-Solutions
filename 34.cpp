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

vector<ll> fact(10,0);

void init(){
    fact[0]=fact[1]=1;
    for(ll i=2;i<=9;i++) fact[i]=i*fact[i-1];

}

bool check(ll i){
    string num=to_string(i);
    ll temp=0;
    forn(j,num.size()) {
        if(temp>i) return false;
        temp+=fact[num[j]-'0'];

    }
    if(i==temp) return true;
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
        clock_t start;
        start=clock();
        init();
        ll ans=0;
        for(ll i=3;i<=1000000;i++){
            if(check(i)){
                ans+=i;
            }

        }
        cout<<ans<<endl;
        cout<<(clock()-start)/(double) CLOCKS_PER_SEC;



    }


    return 0;
}
