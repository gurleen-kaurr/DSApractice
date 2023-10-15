#include<iostream>
using namespace std;

int main()
{
    int a[20],n;
    int i;
    cout<<"Enter number of elements in array";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The array after alternate swapping:"<<endl;
    for(i=0;i<n;i=i+2)
    {
        if(a[i+1]<n+1)
        {
            swap(a[i],a[i+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"   ";
    }
    return 0;
}