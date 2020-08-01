#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	string s;
	cin>>s;
	map<string,int> mp;
	string s1;
	s1.pb(s[0]);
	s1.pb(s[1]);
	mp[s1]++;
	for(int i=2;i<n;i++){
		s1.erase(s1.begin()+0);
		s1.pb(s[i]);
		mp[s1]++;
	}
	int mx=0;
	for(auto& elm:mp){
		if(elm.second>mx){
			mx=elm.second;
			s1 = elm.first;
		}
	}
	cout<<s1<<endl;
}