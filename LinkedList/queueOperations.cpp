#include<iostream>
using namespace std;

class circularQueue{

        int front, rear, size;
        int* array;

    public:
        circularQueue(int s){
            size = s;
            front = rear = -1 ;
            array = new int[s];
        }

        void enQueue(int value){
            if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
                cout<< "Queue OverFlow!"<< endl ;
                return;
            }
            else if(front == -1){
                front = rear = 0;
                array[rear] = value;
            }
            else if (rear == size-1 && front != 0){
                rear = 0;
                array[rear] = value;
            }   
            else {
                rear ++;
                array[rear] = value;
            }
            cout<< "Enqueued " << value << " into the queue." << endl;
        }

        void deQueue(){
            if(front == -1){
                cout<<"Queue Underflow"<<endl;
                return;
            }

            cout<<"Dequeued " << array[front] << " from the queue." << endl;

            if(front == rear){
                front = rear = -1 ;
            }
            else if(front == size - 1){
                front = 0 ;
            }
            else{
                front++;
            }
        }

        void displayQueue(){
            if(front == -1){
                cout<<"\nQueue is Empty."<<endl;
                return;
            }
            cout<<"\nElements in circular queue are: "<<endl;
            if (rear >= front) {
                for (int i = front; i <= rear; i++) {
                    cout << array[i] << " ";
                }
            }
            else { 
                for (int i = front; i < size; i++) {
                    cout << array[i] << " ";
                }
                for (int i = 0; i <= rear; i++) {
                    cout << array[i] << " ";
                }
            }
            cout << endl;
        }
};

int main(){
    int size;
    cout << "Enter the size of the circular queue: ";
    cin >> size; 
    circularQueue q(size);
    int choice, value ;
    while (1) {
        cout << "1. Insert element into the queue" << endl;
        cout << "2. Remove element from the queue" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to be enqueued: ";
                cin >> value;
                q.enQueue(value);
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
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;

}