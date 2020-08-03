#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(n) for(ll i=0;i<n;i++)
using namespace std;
int main(){
	ll l1,l2,r1,r2,k;
	cin>>l1>>r1>>l2>>r2>>k;
	ll l = max(l1,l2);
	ll r = min(r1,r2);
	if(r>=l){
    	if(l<=k && k<=r){
    		cout<<r-l<<endl;
    	}
    	else{
    		cout<<r-l+1<<endl;
    	}
	}
	else{
	    cout<<"0";
	    return 0;
	}
	return 0;
}