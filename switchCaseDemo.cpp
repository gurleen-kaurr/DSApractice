#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers:"<<endl;
    cin>>a>>b;

    char op;
    cout<<"Enter the operation you want to perform:"<<endl;
    cin>>op;
    switch (op)
    {
    case '-': cout<<(a-b)<<endl;
        break;
    case '+': cout<<(a+b)<<endl;
        break;
    case '*': cout<<(a*b)<<endl;
        break;
    case '/': cout<<(a/b)<<endl;
        break;
    
    default:cout<<"Invalid"<<endl;
        break;
    }
    return 0;
}