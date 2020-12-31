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
    node *temp;
    temp=top;
    //cout<<temp->data<<" "<<temp->next<<endl;
    newnode->next=temp;
    //free(top);
    top=newnode;
    //cout<<top->data<<" "<<top->next<<endl;
    //cout<<top->data;
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
        //free(newnode);
    }
    //cout<<top->data;
    return top;
}
node *add1num(node *top){
    node *newnode;
    newnode=createnode();
    top=push(top,newnode);
    return top;
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
node *pop(node *top){
    node *temp;
    temp=top;
    if (top==NULL){
        cout<<"The stack is empty"<<endl;
        return top;
    }
    else if(temp->next==NULL){
        cout<<"Warning! This was the last element in the stack"<<endl;
    }
    else if (temp->next->next==NULL){
        cout<<"Warning! Only one element is left in the stack after this operation."<<endl;
    }
    cout<<"element popped is:"<<top->data<<endl;
    top=top->next;
    return top;
}
int main(){
    node *top;
    top=createnode();
    int s;
    while(s){
        cout<<"enter 1. to push()."<<endl;
        cout<<"enter 2. to pop()."<<endl;
        cout<<"enter 3. to push more than one element."<<endl;
        cout<<"enter 4. to display stack."<<endl;
        cout<<"enter your option:";
        cin>>s;
        if (s==1){
            top=add1num(top);
        }
        else if(s==2){
            top=pop(top);
        }
        else if(s==3){
            top=addnum(top);
        }
        else if(s==4){
            display(top);
        }
        else{
            break;
        }
    }
}
