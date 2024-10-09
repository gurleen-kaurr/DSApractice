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
    node* cur = head;
    while (cur != NULL){
        cout << cur -> data << "  " ;
        cur = cur -> next ;
    }
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





int main(){

    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    traverseLinkedList(head);
    searchElement(head,30);
    findLenght(head);
    head = insertAtBegin(head,50);
    head = insertAtEnd(head,60);
    traverseLinkedList(head);

    return 0;

}

