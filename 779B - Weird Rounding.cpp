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
	string s;
	ll k,z=0,nz=0,a=0,b=0;
	cin>>s>>k;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			z++;
		}
		else
			nz++;
	}
	if(z<k){
		cout<<nz+z-1<<endl;
		return 0;
	}
	else{
		for(int i=s.length()-1;i>=0;i--){
			if(s[i]=='0'){
				if(a+1==k)
					break;
				else{
					a++;
				}
			}
			else
				b++;
		}
		cout<<b<<endl;
	}
	return 0;
}