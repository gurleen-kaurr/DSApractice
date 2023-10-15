#include<iostream>
using namespace std;

int main()
{
    int a[50],i,n,elem,pos;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be inserted: ";
    cin>>elem;
    cout<<"Enter the position at which element should be inserted: ";
    cin>>pos;
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
     a[i]=elem;
     n++;
    
    cout<<"The elements are: \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"    ";
    }
    return 0;
}