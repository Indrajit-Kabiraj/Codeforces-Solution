#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll> 
#define pb push_back
#define For(i,n) for(ll i=0;i<n;i++)
#define MOD 1000000007
#define MAX 100005
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
	#endif
	int n,mx=0,res=0;
	cin>>n;
	vi v(n);
	For(i,n)cin>>v[i];
	// if(v[0]!=1 && v[n-1]!=1000){
	// 	cout<<"0"<<endl;
	// 	return 0;
	// }
	if(v[0]==1 && v[n-1]==1000){
		for(int i=n-1;i>0;i--){
			if(v[i]-v[i-1]==1)
				mx++;
			else{
				break;
			}
			res=max(mx,res);
		}
		mx=0;
		if(v[1]-v[0]==1){
			mx++;
			res=max(mx,res);
		}
		for(int i=1;i<n-1;i++){
			if((v[i]-v[i-1]==1 && v[i+1]-v[i]==1)){
				mx++;
			}
			else{
				mx=0;
			}			
			res=max(mx,res);
		}
	}
	if(v[0]==1 && v[n-1]!=1000){
		if(v[1]-v[0]==1){
			mx++;
			res=max(mx,res);
		}
		for(int i=1;i<n-1;i++){
			if((v[i]-v[i-1]==1 && v[i+1]-v[i]==1)){
				mx++;
			}
			else{
				mx=0;
			}
			res=max(mx,res);
		}
	}
	else if(v[0]!=1 && v[n-1]==1000){
		for(int i=n-1;i>0;i--){
			if(v[i]-v[i-1]==1)
				mx++;
			else{
				break;
			}
			res=max(mx,res);
		}
	}
	else{
		for(int i=1;i<n-1;i++){
			if((v[i]-v[i-1]==1 && v[i+1]-v[i]==1)){
				mx++;
			}
			else{
				mx=0;
			}
			res=max(mx,res);
		}
	}
    cout<<res<<endl;
}