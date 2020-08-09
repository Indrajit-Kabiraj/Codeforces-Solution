#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
#define MOD 1000000007
using namespace std;
ll fermat(ll a,ll n){
	ll mod = 10e9 + 7;
	ll res=1;
	while(n){
		if(n&1){
			res=(res*a)%mod;
		}
		n = n>>1;
		a = (a*a)%mod;
	}
	return res;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	ll res=0;
	cin>>s;
	ll len = s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='1')res++;
    }
    if(len==1){
        cout<<"0"<<endl;
        return 0;
    }
    if(res==1){
        cout<<len/2<<endl;
    }
	else{
		cout<<(len+1)/2<<endl;
	}
	return 0;
}