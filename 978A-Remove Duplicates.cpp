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
	int n;
	cin>>n;
	vi v(n),vec;
	For(n)cin>>v[i];
	set<int> s;
	for(int i=n-1;i>=0;i--){
		if(s.find(v[i])!=s.end()){
			vec.pb(v[i]);
			s.insert(v[i]);
		}
	}
	cout<<vec.size()<<endl;
	For(vec.size()){
		cout<<vec[i]<<" ";
	}
	return 0;
}