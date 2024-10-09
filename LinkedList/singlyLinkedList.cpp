#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

    node(int data){
        this -> data = data ;
        this -> next = NULL ;
    }
};

void traverseLinkedList(node* head){
    while(head != NULL){
        cout<< head -> data << " ";
        head = head -> next ;
    }
    cout<<endl;
}

void searchElement( node* head, int target ){
    node* cur = head;
    while ( cur != NULL){
        if (cur -> data == target){
            cout << "\nElement Found";
        }
        cur = cur -> next ;
    }
}

int findLenght(node* head){
    int len = 0;
    node* cur = head;
    while (cur != NULL){
        len++;
        cur = cur -> next ;
    }
    cout<< " \nNumber of Elements are "<< len ; 
    cout<< endl;
    return 0;
}

node* insertAtBegin(node* head, int item){
    node* newNode = new node(item);
    newNode -> next = head ;
    head = newNode ;
    return head;
}

node* insertAtEnd(node* head, int item){
    node* newNode = new node(item);
    if (head == NULL){
        head = newNode;
    }
    node* cur = head;
    while(cur -> next != NULL){
        head = head -> next;
    }
    cur -> next = newNode;
    return head;
}

node* insertAtArbitrary(node* head, int item, int position){
    if (position < 1){
        cout<<("invalid position!");
        return head;
    }
    if(position==1){
        node* newNode = new node(item);
        newNode -> next = head;
        return newNode;
    }

    node* prev = head;
    int count = 1;
    while(count < position-1 && prev != NULL){
        prev = prev -> next ;
        count ++;
    } 
    
    if(prev == NULL){
        cout<<"Invalid Choice!";
        return head;
    }

    node* newNode = new node(item);
    newNode -> next = prev -> next;
    prev -> next = newNode;
    return head;
}

node* deleteAtBegin(node* head){
    if(head == NULL){
        return NULL;
    }
    node* temp = head ;
    head = head -> next;
    delete(temp);
    return head;

}

node* deleteAtEnd(node* head){
    if(head == NULL){
        return NULL;
    }
    if(head -> next ==NULL){
        delete head;
        return NULL;
    }
    node* secondLast = head;
    while(secondLast -> next -> next != NULL){
        secondLast = secondLast -> next;
    }
    delete(secondLast -> next);
    secondLast -> next = NULL;
    return head;
}

node* deleteAtArbitrary(node* head, int position){
    if(head == NULL && position < 1){
        return NULL;
    }
    if(position == 1){
        node* temp = head;
        head = head -> next ;
        delete temp;
        return head;
    }
    node* prev = head;
    int count = 1;
    while( count < position && prev-1 != NULL){
        prev = prev -> next;
        count ++;
    }
    if(prev == NULL){
        cout<<"Invalid Position!";
        return head;
    }
    node* temp = prev -> next;
    prev -> next = prev -> next -> next;
    delete temp;
    return head;

}


int main(){

    node* head = NULL;
    int choice, val, pos;
    while(1){
        cout<<"1. Insert at the Beginning."<<endl;
        cout<<"2. Insert at the End."<<endl;
        cout<<"3. Insert at a Specific Position."<<endl;
        cout<<"4. Delete at the Beginning."<<endl;
        cout<<"5. Delete at the End."<<endl;
        cout<<"6. Delete at a Specific Position."<<endl;
        cout<<"7. Display Linked List."<<endl;
        cout<<"8.EXIT"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the value to be Inserted: ";
            cin>>val;
            insertAtBegin(head,val);
            break;

        case 2:
            cout<<"Enter the value to be Inserted: ";
            cin>>val;
            insertAtEnd(head,val);
            break;
        
        case 3:
            cout<<"Enter the position where you want to insert the value: ";
            cin>>pos;
            cout<<"Enter the value to be Inserted: ";
            cin>>val;
            insertAtArbitrary(head,val,pos);
            break;

        case 4:
            deleteAtBegin(head);
            break;

        case 5:
            deleteAtEnd(head);
            break;

        case 6:
            cout<<"Enter the position where you want to delete the value: ";
            cin>>pos;
            deleteAtArbitrary(head,pos);
            break;
        
        case 7:
            traverseLinkedList(head);
            break;

        case 8:
            return 0;
        
        default:
            cout<<"Invalid choice. Please choose a valid option.";
            break;
        }
    }
    
    return 0;

}

