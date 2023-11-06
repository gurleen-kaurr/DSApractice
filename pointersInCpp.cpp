#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;
    cout<<"Address of num is : "<<&num;

    int *ptr = &num;
    cout<<"Address is "<<ptr<<endl;
    cout<<"value is "<<*ptr<<endl;

    cout<<"Size Of Integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;

    int a = num;
    cout<<"before "<<num<<endl;
    a++;
    cout<<"after "<<num<<endl;

    (*ptr)++;
    cout<<"After incrementing pointer the result is : "<<num<<endl;

    int *q = ptr;
    cout<<"Copying a pointer: "<<endl;
    cout<< ptr << " - "<< q <<endl;
    cout<< *ptr << " - "<< *q <<endl;

    

    return 0;
}