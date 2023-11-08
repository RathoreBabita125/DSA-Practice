#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    int n1=0;
    ans.push_back(n1);
    if(n==1){
        return ans;
    }
    int n2=1;
    ans.push_back(n2);
   
   for(int i=2;i<n;i++){
        int n3=n1+n2;
        n1=n2;
        n2=n3;
        ans.push_back(n3);
   }
    return ans;
}

int main(){
    int n;
    cin>>n;

    generateFibonacciNumbers(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }


}