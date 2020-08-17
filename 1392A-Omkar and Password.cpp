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
		ll n;
		cin>>n;
		vi v(n);
		map<int,int> mp;
		For(n){
			cin>>v[i];
			mp[v[i]]++;
		}
		if(mp.size()==1)cout<<v.size()<<endl;
		else{
			cout<<"1"<<endl;
		}
	}
}