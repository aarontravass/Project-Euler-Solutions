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



bool check(string &s){
    vector<bool> ind(10,0);
    forn(i,s.length()){
        if(s[i]=='0') return 0;
        if(!ind[s[i]-'1']){
            ind[s[i]-'1']=1;
        }
        else return 0;
    }
    return (9==accumulate(ind.begin(),ind.end(),0));

}


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);

    ll T=1;
    //cin>>T;
    while(T--)
    {
        string ans="918273645";
        for(ll i=9000;i<=9400;i++){
            string temp="";
            temp+=to_string(i)+to_string(i*2);
            if(temp.length()==9){
                if(check(temp)) {
                    ans=max(ans,temp);
                }
            }

        }

        //All other secondary terms are more than their respective levels.
        cout<<ans<<endl;

    }


    return 0;
}
