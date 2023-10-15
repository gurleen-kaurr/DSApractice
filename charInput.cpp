#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character of ur choice: ";
    cin>>c;
    if (islower(c))
    {
        cout<<"LowerCase";
    }
    else if(isupper(c))
    {
        cout<<"Uppercase";
    }
    else
    {
        cout<<"Number";
    }
    return 0;
}