#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
};
node * createnode(){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    int n;
    cout<<"enter the number you want to enter:";
    cin>>n;
    newnode->data=n;
    newnode->next=NULL;
    return newnode;
}
void main(){
    node *top;
    node *tail;
    top=createnode();
    if 
}
