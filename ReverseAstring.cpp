#include<iostream>
using namespace std;
void reverse(char arr[] , int n){
    int start=0;
    int end = n - 1;
    while(start<=end){
        swap(arr[start++], arr[end--]);
       
    }
}
int getLength(char arr[]){
    
}
int main(){
    char arr[50];
    cout<<"Enter the string"<<endl;
    cin>>arr;

    reverse(arr,50);
    cout<<"The modified array is: "<<endl;
    cout<<arr<<endl;
    return 0;
}