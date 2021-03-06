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

vector<ll> nums(2000000,1),primes(1);



void init(){

    ll i=4;
    nums[0]=nums[1]=0;
    while(i<nums.size()){
        nums[i]=0;
        i+=2;
        primes[0]=2;
    }
    for(ll i=3;i<=nums.size()-1;i+=2){
        if(nums[i]){
            if(i<1000) primes.push_back(i);
            for(ll j=i*i;j<=nums.size()-1;j+=i){
                nums[j]=0;
            }
        }
    }

}


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    init();
    ll T=1;
    //cin>>T;
    while(T--)
    {
        ll ans=0,cnt=0,a=1,b=1;;
        //cout<<primes[0]<<endl;
        for(ll i=-1000;i<=1000;i++){
            for(ll j=0;j<primes.size();j++){
                //cout<<ans<<endl;
                cnt=0;
                for(ll n=0;n<=primes[j];n++){
                    if(nums[max(n*n + i*n + primes[j],0LL)]) cnt++;
                    else break;
                }
                if(ans<cnt){
                    ans=cnt;
                    a=i;
                    b=primes[j];
                }
                cnt=0;
                for(ll n=0;n<=primes[j];n++){
                    if(nums[max(n*n + i*n - primes[j],0LL)]) cnt++;
                    else break;
                }
                if(ans<cnt){
                    ans=cnt;
                    a=i;
                    b=-primes[j];
                }


            }
        }
        cout<<a*b;



    }


    return 0;
}
