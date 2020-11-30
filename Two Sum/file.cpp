#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std; 

pair<size_t, size_t> two_sum(const vector<int>& a, int target) {
    map<int,int> m;
    int n=a.size();
  
    for(int i=0;i<n;i++)
        m.insert({ a[i],i });
  
    pair<size_t,size_t> ans={0,0};
    for(int i=0;i<n;i++){
      int complement=target-a[i];
      
      if(m.find(complement)!=m.end()){
        int firstIndex=i;
        int secondIndex=m[complement];
        //cout<<a[i]<<" "<<complement;
        
        ans.first=(size_t)firstIndex;
        ans.second=(size_t)secondIndex;
        break;
      }
    }
    return ans;
}
int main(){
	cout<<"Hello"<<endl;
	vector<int> a={2,4,8,9};
	int target=6;
	pair<size_t, size_t> ans=two_sum(a,target);
	cout<<ans.first<<" "<<ans.second<<endl;
	return 0;
}