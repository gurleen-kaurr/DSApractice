#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void traverseList(node* last){
    if(last == NULL){
        cout << "List is Empty." << endl;
        return;
    }

    node* temp = last->next;
    cout << "The Linked List is: " << endl;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != last->next);
    cout << endl;
}

node* insertAtEmptyList(node* last, int data){
    if(last != NULL){
        cout << "List is not Empty." << endl;
        return last;
    }
    node* newNode = new node(data);
    newNode->next = newNode;
    newNode->prev = newNode;
    last = newNode;
    return last;
}

node* insertAtBeginning(node* last, int data){
    node* newNode = new node(data);
    if(last == NULL){
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }
    newNode->next = last->next;
    newNode->prev = last;
    last->next->prev = newNode;
    last->next = newNode;
    return last;
}

node* insertAtEnd(node* last, int data){
    node* newNode = new node(data);
    if(last == NULL){
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }
    newNode->next = last->next;
    newNode->prev = last;
    last->next->prev = newNode;
    last->next = newNode;
    last = newNode;
    return last;
}

node* insertAtArbitrary(node* last, int data, int pos){
    if(last == NULL){
        if(pos != 1){
            cout << "Invalid Position!" << endl;
            return last;
        }
        node* newNode = new node(data);
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }

    node* newNode = new node(data);
    node* curr = last->next;

    if (pos == 1){
        newNode->next = curr;
        newNode->prev = last;
        last->next = newNode;
        curr->prev = newNode;
        return last;
    }

    for(int i = 1; i < pos - 1; ++i){
        curr = curr->next;
        if(curr == last->next){
            cout << "Invalid position!";
            return last;
        }
    }

    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next->prev = newNode;
    curr->next = newNode;

    if (curr == last){
        last = newNode;
    }

    return last;
}

node* deleteAtBeginning(node* last){
    if(last == NULL){
        cout << "List is empty." << endl;
        return NULL;
    }
    node* head = last->next;

    if(head == last){
        delete head;
        return NULL;
    }

    last->next = head->next;
    head->next->prev = last;
    delete head;

    return last;
}

node* deleteAtEnd(node* last){
    if(last == NULL){
        cout << "List is empty." << endl;
        return NULL;
    }
    node* head = last->next;

    if(head == last){
        delete last;
        return NULL;
    }

    node* secondLast = last->prev;
    secondLast->next = head;
    head->prev = secondLast;
    delete last;

    last = secondLast;
    return last;
}

node* deleteAtArbitrary(node* last, int pos){
    if(last == NULL){
        cout << "List is Empty." << endl;
        return NULL;
    }

    int length = 0;
    node* temp = last->next;
    do{
        length++;
        temp = temp->next;
    } while (temp != last->next);

    if(pos < 1 || pos > length){
        cout << "Invalid position!" << endl;
        return last;
    }

    node* curr = last->next;

    if(pos == 1){
        if(last == last->next){
            delete last;
            return NULL;
        }
        last->next = curr->next;
        curr->next->prev = last;
        delete curr;
        return last;
    }

    for(int i = 1; i < pos - 1; ++i){
        curr = curr->next;
    }

    node* nodeToDelete = curr->next;
    curr->next = nodeToDelete->next;
    nodeToDelete->next->prev = curr;

    if(nodeToDelete == last){
        last = curr;
    }

    delete nodeToDelete;
    return last;
}

int main(){
    node* head = NULL;
    int choice, val, pos;
    
    while(1){
        cout << "\n1. Insert at the Beginning." << endl;
        cout << "2. Insert at the End." << endl;
        cout << "3. Insert at a Specific Position." << endl;
        cout << "4. Delete at the Beginning." << endl;
        cout << "5. Delete at the End." << endl;
        cout << "6. Delete at a Specific Position." << endl;
        cout << "7. Display Linked List." << endl;
        cout << "8. EXIT" << endl;
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter the value to be Inserted: ";
                cin >> val;
                head = insertAtBeginning(head, val);
                break;

            case 2:
                cout << "Enter the value to be Inserted: ";
                cin >> val;
                head = insertAtEnd(head, val);
                break;

            case 3:
                cout << "Enter the position where you want to insert the value: ";
                cin >> pos;
                cout << "Enter the value to be Inserted: ";
                cin >> val;
                head = insertAtArbitrary(head, val, pos);
                break;

            case 4:
                head = deleteAtBeginning(head);
                break;

            case 5:
                head = deleteAtEnd(head);
                break;

            case 6:
                cout << "Enter the position where you want to delete the value: ";
                cin >> pos;
                head = deleteAtArbitrary(head, pos);
                break;

            case 7:
                traverseList(head);
                break;

            case 8:
                return 0;

            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }
    
    return 0;
}