#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define FASTANDFURIOUS ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define For(i,n) for(ll i=0;i<n;i++)
#define MOD 1000000007
#define MAX 200005
#define pll pair <ll,ll>
#define pii pair <int,int>
#define dbg(x)    cout << #x << ": " << x << endl;
#define fi first
#define se second
#define read(n,v) For(i,n)cin>>v[i]
#define mkp make_pair
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define No cout<<"No\n";
#define Yes cout<<"Yes\n";
using namespace std;
ll ncr(ll n, ll k )
{
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
ll feelthepower(ll x,ll y){
	ll res = 1LL;
	while(y){
		if(y&1){
			res = (res*1LL*x)%MOD;
		}
		x = (x*1LL*x)%MOD;
		y/=2;
	}
	return res;
}
vector<int> adj[MAX];
vector<bool> vis(MAX,false);
vi dis(MAX,0);
void dfs(int s,int cnt){
    if(vis[s])return;
    vis[s]=true;
    dis[s]=cnt;
    for(auto v:adj[s]){
        if(!vis[v]){
            dfs(v,cnt+1);
        }
    }
}
int main(){
	FASTANDFURIOUS;
	int tc=1;
	cin>>tc;
	For(ti,tc){
        int n;
        cin>>n;
        For(i,n){
            int u,v;
            cin>>u>>v;
            adj[u].pb(v);adj[v].pb(u);
        }
        dfs(1,0);
        int mx = INT_MIN,ele;
        For(i,MAX){
            if(dis[i]>mx){
                mx=dis[i];
                ele = i;
            }
        }
        For(i,MAX){
            vis[i]=false;
            dis[i]=0;
        }
        dfs(ele,0);
        mx  = INT_MIN;
        For(i,MAX){
            mx = max(dis[i],mx);
        }
        cout<<mx;
	}
}


