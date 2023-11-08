#include<bits/stdc++.h>
using namespace std;

long long sum=0;

void helper(long long n){
    if(n==0){
        return;
    }
    sum+=n;
    helper(n-1);

}

long long sumFirstN(long long n) {
    // Write your code here.
    helper(n);
    return sum;
}


int main(){

    long long n;
    cin>>n;

    cout<<sumFirstN(n);



}