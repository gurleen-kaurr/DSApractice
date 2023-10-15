#include<iostream>
using namespace std;
int main()
{
    int n,i=1,c=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<c;
            c=c+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}