#include<iostream>
using namespace std;

#define MAX 1000
class stack{
    int top;
    int arr[MAX];

    public:
        stack(){
            top = -1;
        }
        void push(int value){
            if(top >= (MAX - 1)){
               cout<<"Stack Overflow!"<<endl;
            }
            else{
                arr[++top] = value ;
                cout<< value <<" pushed into stack.\n"<<endl;
            }
        }

        void pop(){
            if(top == -1){
                cout<<"Stack Underflow!"<<endl;
            }
            else{
                cout<<"Popped " << arr[top--] << "from the stack." <<endl;
            }
        }

        void showTop(){
            if(top == -1){
                cout<<"Stack Underflow!"<<endl;
            }
            else{
                cout<<"Top element is : "<<arr[top] <<endl;
            }
        }

        void displayStack(){
            if (top < 0){
                cout<< " Stack is empty." << endl;
            }
            else{
                cout<<"Stack elements: "<<endl;
                for(int i = top ; i >= 0 ; i--){
                    cout<<arr[i]<<"  ";
                }
                cout<<endl;
            }
        }
};

int main(){
    stack s ;
    int choice, value;
    while(1){
        cout<<"1. Insert into STACK."<<endl;
        cout<<"2. Delete from STACK."<<endl;
        cout<<"3. Show Top Element from STACK"<<endl;
        cout<<"4. Display STACK"<<endl;
        cout<<"5.EXIT"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the value to be Inserted: ";
            cin>>value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;
        
        case 3:
            s.showTop();
            break;

        case 4:
            s.displayStack();
            break;

        case 5:
             return 0;
        
        default:
            cout<<"Invalid choice. Please choose a valid option.";
            break;
        }
    }
    
    return 0;

}
