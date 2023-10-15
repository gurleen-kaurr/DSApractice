#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    char c= 'A';
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        c=c+1;
    }
    return 0;
}