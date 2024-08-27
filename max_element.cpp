#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,7,8,6,3,9};
    int ans=INT_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
        }
        cout<<"Maximum Element of array:"<<ans;
        return 0;
}