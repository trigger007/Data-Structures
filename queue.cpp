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
node *enqueue(node *tail){
    node *newnode;
    newnode=createnode();
    tail->next=newnode;
    tail=newnode;
    return tail;
}
node *addnum(node *top,node *tail){
    int n,i;
    
    cout<<"enter the number of numbers you want to enqueue:";
    cin>>n;
    for(i=0;i<n;i++){
        tail=enqueue(tail);
    }
    return tail;
}

void display(node *top){
    node *temp;
    temp=top;
    if (top==NULL){
        cout<<"The stack is empty"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data<</*" "<<temp->next<<*/endl;
        temp=temp->next;
    }
}

int main(){
    node *top;
    node *tail;
    top=createnode();
    tail=top;
    tail=addnum(top,tail);
    tail=enqueue(tail);
    display(top);
}
