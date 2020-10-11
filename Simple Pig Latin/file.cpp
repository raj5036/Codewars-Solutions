#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;

string pig_it(string str) { 
    string word;
    stringstream iss(str);

    string result="equal to ";
    while(iss>>word){
    	char c=word[0];
    	word.erase(0,1);
    	word+=c;
    	word+="ay";

    	result+=word+" ";
    }
    return result;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin.ignore();
		getline(cin,s);

		cout<<pig_it(s);
		printf("\n");
	}
}