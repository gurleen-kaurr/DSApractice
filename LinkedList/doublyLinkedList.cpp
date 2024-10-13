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

void traverseLinkedList(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void searchElement(node* head, int target){
    node* cur = head;
    while (cur != NULL){
        if (cur->data == target){
            cout << "\nElement Found" << endl;
            return;
        }
        cur = cur->next;
    }
    cout << "\nElement Not Found" << endl;
}

node* insertAtBegin(node* head, int item){
    node* newNode = new node(item);
    if (head != NULL){
        newNode->next = head;
        head->prev = newNode;
    }
    head = newNode;
    return head;
}

node* insertAtEnd(node* head, int item){
    node* newNode = new node(item);
    if (head == NULL){
        head = newNode;
    } else {
        node* cur = head;
        while (cur->next != NULL){
            cur = cur->next;
        }
        cur->next = newNode;
        newNode->prev = cur;
    }
    return head;
}

node* insertAtArbitrary(node* head, int item, int position){
    if (position < 1){
        cout << "Invalid position!" << endl;
        return head;
    }
    if (position == 1){
        return insertAtBegin(head, item);
    }

    node* newNode = new node(item);
    node* cur = head;
    int count = 1;

    while (count < position-1 && cur != NULL){
        cur = cur->next;
        count++;
    }

    if (cur == NULL){
        cout << "Invalid position!" << endl;
        return head;
    }

    newNode->next = cur->next;
    newNode->prev = cur;
    if (cur->next != NULL){
        cur->next->prev = newNode;
    }
    cur->next = newNode;

    return head;
}

node* deleteAtBegin(node* head){
    if (head == NULL){
        return NULL;
    }
    node* temp = head;
    head = head->next;
    if (head != NULL){
        head->prev = NULL;
    }
    delete temp;
    return head;
}

node* deleteAtEnd(node* head){
    if (head == NULL){
        return NULL;
    }
    if (head->next == NULL){
        delete head;
        return NULL;
    }
    node* cur = head;
    while (cur->next != NULL){
        cur = cur->next;
    }
    cur->prev->next = NULL;
    delete cur;
    return head;
}

node* deleteAtArbitrary(node* head, int position){
    if (head == NULL || position < 1){
        return NULL;
    }
    if (position == 1){
        return deleteAtBegin(head);
    }

    node* cur = head;
    int count = 1;
    while (count < position && cur != NULL){
        cur = cur->next;
        count++;
    }

    if (cur == NULL){
        cout << "Invalid position!" << endl;
        return head;
    }

    if (cur->next != NULL){
        cur->next->prev = cur->prev;
    }
    if (cur->prev != NULL){
        cur->prev->next = cur->next;
    }
    delete cur;

    return head;
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
                head = insertAtBegin(head, val);
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
                head = deleteAtBegin(head);
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
                cout << "The Linked List is: ";
                traverseLinkedList(head);
                break;

            case 8:
                return 0;

            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    return 0;
}
