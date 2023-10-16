#include <iostream>
using namespace std;

int getPivot(int arr[] , int n ){
   int start = 0 ;
   int end = n ;
   int mid = start + (end - start);
   while (start<end){
    if(arr[mid]>=arr[0]){
        start = mid + 1;
    }
    else{
        end = mid;
    }
    mid = start + (end -  start ) / 2;
   }
    return start ;
}
 int main(){
    int arr[10]={7,6,5,1,4,8,9};
    cout<<"Pivot is "<<getPivot(arr,8);
    return 0;
 }