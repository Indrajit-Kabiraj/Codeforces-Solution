#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,flag=0;
	cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<v.size()-1;i++){
		for(int j=i+1;j<v.size();j++){
			int sum= v[i]+v[j];
			auto itr = find(v.begin(), v.end(),sum);
			if(itr!=v.end()){
				cout<<itr-v.begin()+1<<" "<<j+1<<" "<<i+1<<endl;
				flag=1;
				return 0;
			}
		}
	}
	if(flag==0){
		cout<<"-1"<<endl;
	}
}
