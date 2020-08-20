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
	ll n,m;
	cin>>n>>m;
	vi v(n),letters(m),pref(n+1,0);
	For(n)cin>>v[i];
	For(m)cin>>letters[i];
	pref[0]=0;
	for(int i=1;i<=n;i++){
		pref[i] = pref[i-1]+v[i-1];
	}
    // For(n)cout<<pref[i]<<endl;
	For(m){
		auto l = lower_bound(pref.begin(), pref.end(),letters[i]);
		auto r = upper_bound(pref.begin(), pref.end(),letters[i]);
// 		cout<<"NUM IS "<<pref[l-pref.begin()]<<endl;
        if(pref[r-pref.begin()-1]==letters[i]){
            cout<<l-pref.begin()<<" "<<abs(pref[r-pref.begin()-2]-letters[i])<<endl;
            continue;
        }
		cout<<l-pref.begin()<<" "<<abs(pref[r-pref.begin()-1]-letters[i])<<endl;
	}
	return 0;
}