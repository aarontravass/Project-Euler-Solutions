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

vector<ll> ch(10000,0),primes;

bool check(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;

}

void init(){

    for(ll i=1000;i<=9999;i++){
        if(check(i)) {
            ch[i]=1;
            primes.push_back(i);
        }
    }


}

bool perm(ll n,ll m){
    string a=to_string(n),b=to_string(m);
    vector<ll> c(10,0);
    forn(i,a.size()) c[a[i]-'0']++;
    forn(i,a.size()){
        c[b[i]-'0']--;

    }
    forn(i,c.size()) {if(c[i]!=0) return 0;}

    return (1);


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
        unordered_map<ll,vector<ll>> mp;
        ll k=0;

        forn(i,primes.size()){
            for(ll j=i+1;j<primes.size();j++){
                if(2*primes[j]<ch.size()+primes[i]){
                    if(ch[2*primes[j]-primes[i]]){
                        mp[k].push_back(primes[i]);
                        mp[k].push_back(primes[j]);
                        mp[k].push_back(2*primes[j]-primes[i]);

                        k++;
                    }
                }

            }
        }


        forn(i,mp.size()){

            if(mp[i][0]!=1487){

                if(perm(mp[i][0],mp[i][1]) && perm(mp[i][0],mp[i][2])){

                    cout<<mp[i][0]<<mp[i][1]<<mp[i][2]<<endl;
                    break;
                }
            }

        }









        auto t2=time;
        cout<<"Time: "<<lapsed(t2,t1)<<endl;


    }


    return 0;
}
