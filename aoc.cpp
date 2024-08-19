#include<iostream>
using namespace std;

float area(float n){
    float radius=n/2;
    float circlearea=3.14*radius*radius;
    cout<<setprecision(2)<< circlearea;
}
int main(){
    cout<<"enter the radius of circle:"<<endl;
    float n ,result;
    cin>>n;
    result=area(n);
    cout<<"area of circle is "<<result;

}