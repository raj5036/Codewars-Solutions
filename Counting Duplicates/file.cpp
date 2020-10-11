#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

#define size 100

inline void printMap(unordered_map<char,int> umap){
	for(auto i=umap.begin();i!=umap.end();++i)
		cout<<"Key : "<<i->first<<" Value : "<<i->second<<endl;
} 
size_t solve(char *in){
 	int count=0;
    unordered_map<char,int> umap;
    string s(in);
    cout<<s<<endl;
    
    for(int i=0;i<s.length();i++){
      umap[tolower(s[i])]++;
    }

    printMap(umap);

    unordered_map<char,int> :: iterator it;
    for(it=umap.begin();it!=umap.end();++it)
      if(it->second>1)
        count++;
    //cout<<count<<endl;
    return count;
}
int main(){
		char in[size];

		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			char c;
			cin>>c;
			in[i]=c;
		}
		cout<<solve(in)<<endl;
		return 0;
}