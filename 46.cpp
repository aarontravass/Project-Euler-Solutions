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

vector<ll> nums(100000000,1),comp(100000000,0),primes;

void init(){
    nums[0]=nums[1]=0;
    for(ll i=2;i*i<=nums.size()-1;i++){
        if(nums[i]){
            primes.push_back(i);
            for(ll j=i*i;j<nums.size();j+=i){
                nums[j]=0;
            }
        }
    }
    for(ll i=9;i<nums.size();i+=2){
        if(i%2 && !nums[i]) comp[i]=1;
    }


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
        init();
        nums.clear();
        //cout<<primes.size();
        forn(i,primes.size()){
            if(primes[i]>6000) break;
            for1n(j,100){
                if(comp[primes[i]+2*j*j]==1 && (primes[i]+2*j*j<comp.size()-1)){
                    comp[primes[i]+2*j*j]++;

                }
            }

        }
        forn(i,comp.size()){
            if(comp[i]==1 && i%2){
                cout<<i<<endl;
                break;
            }
        }


        auto t2=time;
        cout<<"Time: "<<lapsed(t2,t1)<<endl;


    }


    return 0;
}
