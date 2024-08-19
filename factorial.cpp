#include<iostream>
using namespace std;

double fact(double n){
    if(n==0)
    return 1;
    else 
    return n*fact(n-1);
}
int main(){
    double n,result;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    result=fact(n);
    cout<<"factorial is "<<result<<endl;


}