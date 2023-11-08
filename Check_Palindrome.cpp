#include<bits/stdc++.h>
using namespace std;

string newStr="";

void check(string& str,int n){
    if(n<0){
        return;
    }
    newStr+=str[n];
    check(str,n-1);

    
}

bool isPalindrome(string& str) {
    check(str,str.size()-1);
    if(newStr==str) return true;
    return false;
    
    
    // Write your code here.
}


int main(){
    string str;
    cin>>str;

    cout<<isPalindrome(str);


}