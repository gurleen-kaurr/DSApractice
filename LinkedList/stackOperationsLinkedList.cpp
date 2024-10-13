#include<iostream>
using namespace std;

class stackNode{
    public:
        int data;
        stackNode* next;
};

class stack{
    stackNode* top;

    public:
        stack(){
            top = NULL;
        }

        void push(int value){
            stackNode* newNode = new stackNode();
            newNode -> data = value ;
            newNode -> next = top ;
            top = newNode ;
            cout<< value <<" pushed into stack.\n"<<endl;
        }

        void pop(){
            if(top == NULL){
                cout<<"Stack Underflow!"<<endl;
            }
            else{
                stackNode* temp = top ;
                cout<<"Popped " << top -> data << "from the stack." <<endl;
                top = top -> next ;
                delete temp ;
            }
        }

        void showTop(){
            if(top == NULL){
                cout<<"Stack Underflow!"<<endl;
            }
            else{
                cout<<"Top element is : "<< top -> data <<endl;
            }
        }

        void displayStack(){
            if (top == NULL){
                cout<< " Stack is empty." << endl;
            }
            else{
                cout<<"Stack elements: "<<endl;
                stackNode* temp = top ;
                while(temp != NULL){
                    cout<< temp -> data << "    ";
                    temp = temp -> next;                
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

