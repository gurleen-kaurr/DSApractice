#include <bits/stdc++.h>
using namespace std;
#define MAX 10;

void push(int s[], int *top)
{
    int data;
    if (*top == MAX - 1)
    {
        cout << "OVERFLOW\n";
        return;
    }
    cout << "Enter value:\n";
    cin >> data;
    *top = *top + 1;
    s[*top] = data;
    cout << "The entered value is ", s[*top];
}

void pop(int s[], int *top)
{
    if (*top == -1)
    {
        cout << "UNDERFLOW\n";
        return;
    }
    cout << "Data deleted is ", s[*top];
    *top = *top - 1;
}

void show_top(int s[], int *top)
{
    {
        int i;
        i = *top - 1;
        if (*top <= 0)
            printf("Stack is Empty");
        else
            printf("The Elments in Stack are ");
        while (i >= 0)
        {
            cout<<s[i--];
        }
    }
}

void exit(){
    cout<<"Exit from the operations";
    return;
}

int main()
{
    int s[MAX];
    int ch;
    int top = -1;
    for (int i = 0; i < s.length; i++)
    {
        cout << "Choose from the following: \n";
        cout << "1. PUSH\n";
        cout << "2. POP\n";
        cout << "3. SHOW TOP\n";
        cout << "4. EXIT\n";
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch):
            {
            case 1:
                push(s, &top);
                break;
            case 1:
                pop(s, &top);
                break;
            case 1:
                show_top(s, &top);
                break;
            case 1:
                exit();
                break;
            default:
                cout << "Invalid option";
            }
    }
}