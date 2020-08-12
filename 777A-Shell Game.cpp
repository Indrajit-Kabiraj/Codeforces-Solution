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
	int a[6][3] = {{0,1,2},{1,0,2},{1,2,0},{2,1,0},{2,0,1},{0,2,1}};
	int n,x;
	cin>>n>>x;
	cout<<a[n%6][x];
	return 0;
}