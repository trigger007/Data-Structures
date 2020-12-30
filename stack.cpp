#include<iostream>
#include <cstdlib>
using namespace std;

class node{
    public:
    int data;
    node * next;
};
node *createnode(){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    int n;
    cout<<"enter the number you want to enter:";
    cin>>n;
    newnode->data=n;
    newnode->next=NULL;
    return newnode;
}
node *push(node *top,node *newnode){
    newnode->next=top;
    top=newnode;
    return top;
}
node *addnum(node *top){
    int n,i;
    cout<<"enter the number of elements you want to push in the stack";
    cin>>n;
    node *newnode;
    for (i=0;i<n;i++){
        newnode=createnode();
        top=push(top,newnode);
        free(newnode);
    }
    return top;
}
void display(node* top){
    node *temp;
    temp=top;
    while(temp->next!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    node *top;
    int t;
    cout<<"Enter the first element in the stack:";
    cin>>t;
    top=addnum(top);
    display(top);
}
