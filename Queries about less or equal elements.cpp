=#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	ll n,m;
	cin>>n>>m;
	vi v(n),v1(m);
	For(n)
	{
		ll x;
		cin>>x;
		v[i] = x;
	}
	For(m){
	    ll x;
	    cin>>x;
		v1[i] = x;
	}
	sort(v.begin(),v.end());
	For(m){
		auto itr = upper_bound(v.begin(), v.end(),v1[i]);
		v1[i] = itr-v.begin();
	}
	For(m){
		cout<<v1[i]<<" ";
	}
	return 0;
}