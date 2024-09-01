#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
 int count_digit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
 }
 bool armstrong(int n,int digit){
     int ans=0,rem,num=n;
     while(n>0){
        rem=num%10;
        num/=10;
        ans=ans+pow(num,digit);
        return ans;
        }
     if(n==ans)
     return 1;
     else return 0;

    }
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int digit=count_digit(n);
    int ans=armstrong(n,digit);
    
}