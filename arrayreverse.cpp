#include<iostream>
using namespace std;
void rev_arr(int arr[],int n)
{
   int i=0, j=n-1;
while(i<j){
   swap(arr[i],arr[j]);
   i++;
   j--;
}
};
int main(){
    int n,arr[1000],i;
 cout<<"Enter the size of array:";
 cin>>n;
 cout<<"Enter the Elements in the array:";
 for(i=0;i<n;i++){
    cin>>arr[i];
 }
    rev_arr(arr,n);
    cout<<"Reverse Array";
      for(i=0;i<n;i++){
    cout<<" "<<arr[i];
    }

 return 0;
}



