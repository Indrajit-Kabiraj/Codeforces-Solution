#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
#define MOD 1000000007
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k,mx = INT_MIN;
		cin>>n>>k;
		vi v(n);
		For(n){
			cin>>v[i];
			mx=max(v[i],mx);
		}
		if(k&1){
			For(n)
				cout<<mx-v[i]<<" ";
		}
		else{
		    ll mn = *min_element(v.begin(),v.end());
			For(n)
				cout<<v[i]-mn<<" ";
		}
		cout<<endl;
	}
}