#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    if(n<0){
        return;
    }
    cout<<arr[n]<<" ";
    reverseArray(arr,n-1);
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n-1);
}