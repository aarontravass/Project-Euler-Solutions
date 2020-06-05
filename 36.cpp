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

ull reverse(ull n) 
{ 
    ull rev = 0; 

    while (n > 0) { 
        rev <<= 1; 
        if ((n & 1) == 1) 
            rev ^= 1; 
        n >>= 1; 
    } 
  
    return rev; 
} 

bool checkbit(ull n) 
{ 
    ull rev = reverse(n); 
    return (n == rev); 
} 

bool numcheck(ll n){
  string s=to_string(n);
  forn(i,s.length()){
    if(s[i]!=s[s.length()-i-1]) return false;
  }
  return (true&&checkbit(n));
}




int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll T=1;
    //cin>>T;
    while(T--)
    {
        //cout<<numcheck(585);
        ll ans=0;
        forn(i,1000000){
            if(numcheck(i)){
              ans+=i;
              cout<<i<<endl;
            }
        }
        cout<<ans;
    }


    return 0;
}