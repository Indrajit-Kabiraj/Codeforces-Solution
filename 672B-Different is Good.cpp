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
	int n,res=0;
	map<char,int> mp;
	cin>>n;
	string s;
	cin>>s;
	For(s.length()){
		mp[s[i]]++;
	}
	for(auto& elm:mp){
		if(elm.second>1){
			res+=elm.second-1;
		}
	}
	if(mp.size()+res>26){
	    cout<<"-1";
	    return 0;
	}
	if(res>26){
	    cout<<"-1";
	    return 0;
	}
	cout<<res<<endl;
	return 0;
}