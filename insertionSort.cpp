#include<iostream>
using namespace std;
int insertionSort(int arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        int temp = arr[i] ;
        int j = i-1 ;
        for(;j>=0;j--){
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    return arr[n];
}

int main()
{
    int a[20] , n ;
    cout<<"Enter the no. of elements in the Array: ";
    cin>>n;
    cout<<"Enter the Array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertionSort(a,n);
    cout<<"Array after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"       ";
    }
    cout<<endl;
    return 0;
}