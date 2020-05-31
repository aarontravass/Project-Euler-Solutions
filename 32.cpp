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

using namespace std;



vector<bool> product(MAXN,false);

bool check(ll m1,ll m2,ll p){
    string s=to_string(m1)+to_string(m2)+to_string(p);
    vector<bool> chars(10,false);
    forn(i,s.length()){
        if(chars[s[i]-'0']==false && s[i]!='0') chars[s[i]-'0']=true;
        else return false;
    }
    for(ll i=1;i<=9;i++) if(chars[i]==false) return false;
    if(product[p]) return false;
    return product[p]=true;

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
        //cout<<check(39,186,7254);
        ll ans=0;
        for1n(i,100){
            for(ll j=i;j<=9900;j++){
                if(check(i,j,i*j)) {
                        ans+=i*j;

                }

            }
        }
        cout<<ans;


    }


    return 0;
}
