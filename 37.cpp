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

vector<ll> nums(1000001, 1);

void init(){
  nums[0]=nums[1]=0;
  for(ll i=2;i<nums.size();i++){
    if(nums[i]){
      for(ll j=i*i;j<nums.size();j+=i){
        nums[j]=0;
      }
    }
  }

}

bool check(ll n){
  string s=to_string(n);
  string m1,m2;
  m1=m2="";
  string temp="";
  forn(i, s.length()){
    m1+=s[i];
    temp+=s[s.length()-i-1];
    m2=temp;
    reverse(m2.begin(),m2.end());
    if(!nums[stoll(m1)] || !nums[stoll(m2)]){
      return false;
    }
  }
  return true;

}




int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll T=1;
    //cin>>T;
    while(T--)
    {
        init();
        ll ans=0;
        for(ll i=10;i<=1000000;i++){
          if(check(i)){
            cout<<i<<endl;
            ans+=i;
          }
        }
        cout<<ans<<endl;
       
    }


    return 0;
}