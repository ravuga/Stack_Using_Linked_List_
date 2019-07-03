#include <iostream>
#include <conio.h>
using namespace std;
struct node
        {
                int info;
        node *next;
        }*top=NULL;
void push(int);
void pop();
void peek();
int main()
{
    int val, choice;
    while(1)
    {
        cout<<"\n**** Enter choice: ****" <<endl;
        cout<<"1 : Push" <<endl;
        cout<<"2 : Pop" <<endl;
        cout<<"3 : Peek" <<endl;
        cout<<"4 : Exit" <<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter value to push: ";
                cin>>val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"Wrong choice..." <<endl;
        }
    }
    getch();
    return 0;
}
void push(int val)
{
    node *temp = new node; //creating new node
    temp->info = val;
    if(top==NULL) //checking if stack is empty
    {
        temp->next = NULL; //assigning NULL to link of last node
        top = temp;
    }
    else
    {
        temp->next = top; //adding new node in stack
        top = temp;
    }
}
void pop()
{
    node *p;
    if(top==NULL) //checking if stack is empty
    {
        cout<<"Stack is empty...";
    }
    else
    {
        p = top;
        top = top->next; //moving to next node
        cout<<"Element deleted is: " <<p->info <<endl;
        delete p;
    }
}
void peek()
{
    node *p = top; //taking temporary pointer for traversing
    cout<<"\n Elements in stack are: " <<endl;
    while(p!=NULL)
    {
        cout<<p->info <<endl;
        p = p->next;
    }
    cout<<"NULL" <<endl;
}