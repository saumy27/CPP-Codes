#include<iostream>
using namespace std;
int main(){
  int i,j;   //i= row and j= column
  for(i=1;i<=5;i++){
    for(j=1;j<=5-(i-1);j++){
        cout<<j<<" ";
        
    }
    cout<<endl;
  }
}
