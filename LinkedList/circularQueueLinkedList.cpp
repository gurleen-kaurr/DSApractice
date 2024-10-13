#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class circularQueue{
    node* front;
    node* rear;

    public:
circularQueue() {
    front = rear = NULL;
}

void enQueue(int value){
    node* newNode = new node();
        newNode->data = value;
        if (front == NULL) { 
            front = rear = newNode;
            rear -> next = front; 
        }
        else {
            rear -> next = newNode; 
            rear = newNode;       
            rear -> next = front;  
        }
        cout << "Enqueued " << value << " into the queue." << endl;
}
 void deQueue(){
     if (front == NULL) { 
            cout << "Queue Underflow! The queue is empty." << endl;
            return;
        }
        
        if (front == rear) { 
            cout << "Dequeued " << front->data << " from the queue." << endl;
            delete front;
            front = rear = NULL;
        }
        else {
            node* temp = front;
            cout << "Dequeued " << temp -> data << " from the queue." << endl;
            front = front->next; 
            rear->next = front; 
        }
 }

void displayQueue(){
     if (front == NULL) {
            cout << "The queue is empty." << endl;
            return;
        }
        
        node* temp = front;
        cout << "Queue elements are: ";
        do {
            cout << temp->data << " ";
            temp = temp -> next;
        } while (temp != front);
        cout << endl;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main(){
    circularQueue q;
    int choice, val;
    
    while (1) {
        cout << "\n1. Insert element into the queue." << endl;
        cout << "2. Delete elements from queue." << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> val;
                q.enQueue(val);
                break;

            case 2:
                q.deQueue();
                break;

            case 3:
                q.displayQueue();
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;

}