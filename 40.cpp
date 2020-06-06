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

using namespace std;
typedef std::chrono::high_resolution_clock Clock;

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

ll method1(){
    string s="";
    ll i=0;
    while(1){
        s+=to_string(i);
        if(i>=1000001){
            break;
        }
        i++;
    }
    ll ans=1;
    for(ll t=1;t<=1000000;t*=10){
        ans*=(s[t]-'0');
    }
   return ans;

}


ll method2(){
    vector<ll> arr={0};
    for1n(i,1000001){
        vector<ll> temp;
        ll n=i;
        while(n>0){
            temp.push_back(n%10);
            n/=10;
        }
        reverse(temp.begin(),temp.end());
        arr.insert(arr.end(),temp.begin(),temp.end());
    }
    ll ans=1;
    for(ll t=1;t<=1000000;t*=10){
        ans*=(arr[t]);
    }
    return ans;


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
        cout<<"Method1: "<<method1()<<endl;
        auto t2=time;
        cout<<"Time lapsed: "<<lapsed(t2,t1)<<endl;
        cout<<"Method2: "<<method2()<<endl;
        auto t3=time;
        cout<<"Time Lapsed: "<<lapsed(t3,t2)<<endl;

    }


    return 0;
}
