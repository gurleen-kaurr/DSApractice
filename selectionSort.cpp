#include<iostream>
using namespace std ;
int selectionSort(int arr[], int n){
     for(int i=0;i<n-1;i++){
        int minIndex = i ;
        for (int j=i+1;j<n;j++)
        {
            if(arr[minIndex]>arr[j])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
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
    selectionSort(a,n);
    cout<<"Array after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"       ";
    }
    cout<<endl;
    return 0;
}