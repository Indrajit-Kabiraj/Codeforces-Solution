#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	int q;
	cin>>q;
	while(q--){
		ll n;
		cin>>n;
		vi v(2*n);
		For(2*n){
			cin>>v[i];
		}
		sort(v.begin(), v.end());
		cout<<abs(v[n-1]-v[n])<<endl;
	}
	return 0;
}