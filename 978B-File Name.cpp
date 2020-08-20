#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
#define MOD 1000000007
#define MAXN   100001 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,ans=0,cur=0;
	cin>>n;
	string s;
	cin>>s;
	For(s.length()){
		if(s[i]!='x')
			cur=0;
		else 
			cur++;
		if(cur>=3){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}