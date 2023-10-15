//Find the first and last occurence of an element in an array.
#include<iostream>
using namespace std;

int FirstOcc(int arr[] , int n , int key)
{
    int start = 0 ;
    int end = n-1 ;
    int mid = start + (end - start) / 2 ;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2 ;
    }
    return ans;
}

int LastOcc(int arr[] , int n , int key){

    int start = 0 ;
    int end = n-1 ;
    int mid = start + (end - start) / 2 ;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
        mid = start + (end - start) / 2 ;
    }
    return ans;
}

int main(){
    int arr[20] = {2,4,5,7,4,4,4,8,9};
    cout<<"First Occurence at index at "<<FirstOcc(arr,10,4)<<endl;
    cout<<"Last Occurence at index at "<<LastOcc(arr,10,4)<<endl;
    return 0;
}