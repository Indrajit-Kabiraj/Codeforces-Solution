#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	ll n,keys=0;
	string s;
	cin>>n>>s;
	vi v(26,0);
	for(int i=0;i<2*n-2;i++){
		if(islower(s[i])){
			v[s[i]-'a']++;
		}
		else{
			if(v[s[i]-'a']==0){
				keys++;
			}
			else{
				v[s[i]-'a']--;
			}
		}
	}
	cout<<keys<<endl;
}