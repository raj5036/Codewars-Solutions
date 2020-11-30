#include<bits/stdc++.h>
#include<string>
using namespace std;

int M=10000,N=10000;
char path[N][M];

void fileIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
}
int main(){
	fileIO();
	
	string s;
	while(getline(cin,s))
		cout<<s<<endl;
		
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			path[i][j]='#';
	path[N/2][M/2]='S';
	
	return 0;
}
