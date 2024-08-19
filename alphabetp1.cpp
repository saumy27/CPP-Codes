#include<iostream>
using namespace std;
int main(){
    int row ,col;
    for(row=1;row<=5;row++){
        char c= 'a'+(row-1);
        for(col=1;col<=row;col++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}