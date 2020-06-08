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

unordered_map<ll,bool> nums;

void init(){
    ll sum=0;
    for(ll i=1;i<100000;i++){
        sum+=i;
        nums[sum]=1;
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
        ifstream file;
        file.open("words.txt",ios::in);
        string s;
        while(!file.eof()){
            file>>s;
        }
        string temp="";
        vector<string> arr;
        forn(i,s.length()){
            if(s[i]==','){
                arr.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }

        ll ans=0;
        forn(i,arr.size()){
            ll ts=0;
            //cout<<arr[i]<<endl;
            for(ll j=1;j<arr[i].size()-1;j++){
                ts+=(arr[i][j]-'A'+1);
            }
            if(nums[ts]) ans++;

        }
        cout<<ans;









        auto t2=time;
        cout<<endl<<"Time lapsed: "<<lapsed(t2,t1)<<endl;


    }


    return 0;
}
