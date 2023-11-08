#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
void helper(int n){
      if(n<0){
		  return;
	  }
	  ans.push_back("Welcome to Coding!");
	  helper(n-1);
}

vector<string> printNTimes(int n) {
	
	helper(n-1);
	return ans;
}

int main(){

    int n;
    cin>>n;

    printNTimes(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}