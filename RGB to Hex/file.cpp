#include<bits/stdc++.h>
#include<string>
#include<iomanip>
using namespace std;

string RGBToHex(int r,int g,int b){
	ostringstream oss;
	oss<<uppercase<<setfill('0')<<setbase(16)
	<<setw(2)<<(r<0?0 : r>255?255:r)
	<<setw(2)<<(g<0?0 : g>255?255:g)
	<<setw(2)<<(b<0?0 : b>255?255:b);
	
	return oss.str();
}
int main(){
	int r,g,b;
	scanf("%d%d%d",&r,&g,&b);
	string ans=RGBToHex(r,g,b);
	cout<<ans<<endl;
	return 0;
}
