#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	ll n,x;
	cin>>n;
	vi v,pa,na,za;
	For(n){
		cin>>x;
		v.pb(x);
		if(x<0){
			na.pb(x);
		}
		else if(x==0){
			za.pb(x);
		}
		else
			pa.pb(x);
	}
	if(pa.size()==0){
		pa.pb(na[na.size()-1]);
		na.pop_back();
		pa.pb(na[na.size()-1]);
		na.pop_back();
	}
	if(na.size()%2==0){
		za.pb(na[na.size()-1]);
		na.pop_back();
	}
	cout<<na.size()<<" ";
	For(na.size())
		cout<<na[i]<<" ";
	cout<<endl;
	cout<<pa.size()<<" ";
	For(pa.size())
		cout<<pa[i]<<" ";
	cout<<endl;
	cout<<za.size()<<" ";
	For(za.size())
		cout<<za[i]<<" ";
	cout<<endl;
	return 0;
}