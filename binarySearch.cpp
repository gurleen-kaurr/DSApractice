#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size , int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return -1;
}
int main()
{
int arr1[6]={3,4,5,6,7,8};
int index1 = BinarySearch(arr1,6,5);
cout<<index1;
return 0;
}