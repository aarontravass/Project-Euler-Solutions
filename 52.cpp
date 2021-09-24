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
        ll last=1;

        for(ll i=1;i<=10000;i*=10){
            last=(last*10 + 6);
            for(ll j=i;j<=last;j++){
                if(perm(j,2*j) && perm(2*j,3*j) && perm(3*j,4*j) &&
                   perm(4*j,5*j) && perm(5*j,6*j))
                   {

                        cout<<j<<endl;
                        goto label;

                   }

            }

        }


        label:auto t2=time;
        cout<<lapsed(t2,t1)<<endl;







    }


    return 0;
}
