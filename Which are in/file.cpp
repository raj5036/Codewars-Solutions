#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

void solve(vector<string> array1,vector<string> array2){
 	vector<string> r;
    for(int i=0;i<array1.size();i++)
      for(int j=0;j<array2.size();j++)
        if(array2[j].find(array1[i])!=string::npos){
          r.push_back(array1[i]);
          break;
        }
    
    sort(r.begin(),r.end());
    for(int i=0;i<r.size();i++)
		cout<<r[i]<<" ";
}
int main(){
	vector<string> array1;
	vector<string> array2;

	int m,n;
	scanf("%d%d",&m,&n);
	array1.reserve(m);
	array2.reserve(n);

	for(int i=0;i<m;i++){
		string inp;
		cin>>inp;
		array1.push_back(inp);
	}

	for(int i=0;i<n;i++){
		string inp;
		cin>>inp;
		array2.push_back(inp);
	}

	solve(array1,array2);
	return 0;	
}