#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	ll n,m;
	cin>>n;
	vi v;
	For(n){
		ll x;
		cin>>x;
		v.pb(x);
	}
	sort(v.begin(), v.end());
	ll q;
	cin>>q;
	For(q){
		cin>>m;
		auto itr = upper_bound(v.begin(), v.end(),m);
		cout<<itr-v.begin()<<endl;
	}
	return 0;
}