#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin>>q;
	For(q){
		ll n,c=0;
		bool ok = false;
		cin>>n;
		vi a(n),b(n),vec;
		For(n)cin>>a[i];
		For(n)cin>>b[i];
		For(n){
			if(b[i]-a[i]<0){ok=true;
                break;
			}
			else{
				if(b[i]-a[i]!=c){
					if(b[i]-a[i]!=0)
						vec.pb(b[i]-a[i]);
					c = b[i]-a[i];
				}
			}
		}
// 		For(vec.size()){
// 		    cout<<vec[i]<<" ";
// 		}
		if(ok){
			cout<<"NO"<<endl;
		}
		else{
			if(vec.size()<=1){
				cout<<"YES"<<endl;
			}
			else{
			    cout<<"NO"<<endl;
			}
		}
