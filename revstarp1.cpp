#include<iostream>
using namespace std;
int main(){
    int row ,col;
    for(row=0;row<=5;row++){
        for(col=row;col<=5-(row-1);col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}