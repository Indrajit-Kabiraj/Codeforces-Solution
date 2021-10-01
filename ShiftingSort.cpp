/* May the force be with you */
#include<bits/stdc++.h>
using namespace std; 
#define ll long long
#define vi vector<int>
#define vl vector<ll> 
#define pb push_back
#define FASTANDFURIOUS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define For(i,n) for(ll i=0;i<n;i++)
#define MOD 1000000007
#define MAX 1000001
#define pll pair <ll,ll>
#define pii pair <int,int>
#define dbg(x)    cout << #x << ": " << x << endl;
#define read(n,v) For(i,n)cin>>v[i]
#define mxh priority_queue<int>
#define mnh priority_queue<int,vector<int>,greater<int>>
#define mkp make_pair
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define fi first
#define all(v) v.begin(), v.end()
#define se second
#define Sort(v) sort(v.begin(), v.end())
#define No cout<<"No\n";
#define Yes cout<<"Yes\n";
#define endl '\n'
#define INF 1e18
 
vl fact(1001,1);
 
ll pow(ll x, unsigned ll y, ll p){
    ll res=1LL;
    x=x%p;
    if (x==0) return 0;
    while (y > 0){
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
ll _pow(int a, int b){
    if(!b)
        return 1;
    ll temp = _pow(a, b / 2);
    temp = (temp * temp);
    if(b % 2)
        return (a * temp);
    return temp;
}
ll invmod(int a,int m){
    return pow(a,m-2,m);
}
ll ncr(int n,int r){
    if(n<r)
        return 0;
    ll ans=fact[n];
    ans*=invmod(fact[n-r],MOD);
    ans%=MOD;
    ans*=invmod(fact[r],MOD);
    ans%=MOD;
    return ans;
}
ll ncr_2(ll n, ll k ){
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;
 
    ll result = n;
    for(ll i = 2; i <= k; ++i ) {
        result = result * (n-i+1);
        result /= i;
    }
    return result;
}
signed main(){
  FASTANDFURIOUS;
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  #endif
  int tc=1;
  cin>>tc;
  For(ti,tc){
    int n;
    cin>>n;
    vector<pii> v(n);
    vi vec;
    For(i,n){
        cin>>v[i].fi;
        v[i].se = i;
    }
    for(auto x:v){
        vec.pb(x.fi);
    }
    sort(all(vec));
    set<int> s;
    vector<vector<int>> vv;
    int j = n-1;
    int have = 0;
    while(j>0){
        int x = vec[j];
        for(int i=0;i<n;i++){
            if(v[i].fi==x && s.find(i)==s.end()){
                s.insert(i);
                int req = v[i].se+1;
                for(int k = 0;k<n;k++){
                    if(k!=i){
                        v[k].se -= (req);
                        v[k].se+=(j+1);
                        v[k].se%=(j+1);
                    }
                    // cout<<v[k].fi<<" "<<v[k].se<<endl;
                }
                vector<int> help;
                if(req%(j+1)!=0){
                    help.pb(1);
                    help.pb(j+1);
                    help.pb(req%(j+1));
                }
                if(help.size()!=0){
                    vv.pb(help);
                }
                break;

            }
        }
        j--;
    }
    cout<<vv.size()<<endl;
    for(int i=0;i<vv.size();i++){
        For(j,vv[i].size()){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }
  }  
}
