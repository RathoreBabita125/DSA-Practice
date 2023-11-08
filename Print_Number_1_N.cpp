#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
void helper(int x,int i){
    if(i>x){
        return;
    }
    ans.push_back(i);
    helper(x,i+1);

}
vector<int> printNos(int x) {

   helper(x,1);
   return ans;

}

int main(){
    int n;
    cin>>n;

    printNos(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}