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
		ll n,count=0;
		cin>>n;
		vi v(n);
		For(n)cin>>v[i];
		stack<int> s;
		for(int i=0;i<n;i++){
			if(s.empty())s.push(v[i]);
			if(!s.empty() && s.top()>v[i]){
				count+=s.top()-v[i];
				s.push(v[i]);
			}
			else{
				s.push(v[i]);
			}
		}
		cout<<count<<endl;
	}
}