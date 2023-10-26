#include<iostream>
using namespace std;
int bubbleSort(int arr[] , int n){
    for(int i = 0; i<n ; i++)
    {
        for(int j = 0; j<n-i ; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(a,n);
    cout<<"Array after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"       ";
    }
    cout<<endl;
    return 0;
}