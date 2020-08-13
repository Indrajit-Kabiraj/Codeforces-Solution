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
	ll n,ans=2,l=0;
	cin>>n;
	vi a(n);
	For(n){
		cin>>a[i];
	}
	if(n==1){
	    cout<<"1";
	    return 0;
	}
	for(int i=1;i<n;i++){
		if(a[i]!=(a[i-1]+a[i-2])){
			l=i-1;
			continue;
		}
		ans = max(ans,i-l+1);
	} 
	cout<<ans<<endl;
	return 0;
}