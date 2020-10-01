#include<bits/stdc++.h>
using namespace std;

twoSum(vector<int>given,int target,int n){
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<=n;j++)
      {
        if(given[i]+given[j] == target)
        {
          cout<<given[i]<<" "<<given[j];
          break;
        }
        cout<<endl;
      }
    }
}



int main(){
  ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

int target;
vector<int>given;
int n;
cin >> n>>target;
for(int i=0;i<n;i++)
{
  int temp;
  cin >> temp;
  given.push_back(temp);
}

twoSum(given,n,target);

   return 0;
}