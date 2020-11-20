#include <iostream>
#include<string>
using namespace std;

class node {
    public:
    int data;
    node * next;
};
node *createnode(){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    int num;
    cout<<"Enter the number to be added:";
    cin>>num;
    newnode->data=num;
    newnode->next=NULL;
    return newnode;
}
void display(node *head){
    node *temp;
    temp=head;
    while (temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
node *insertpos(node *head){
    node *temp, *temp1, *newnode;
    int pos;
    cout<< "enter the position you want to insert a new number:";
    cin>>pos;
    temp=head;
    int i=0;
    if (pos==0 || pos==1){
        newnode=createnode();
        newnode->next=head;
        head=newnode;
    }
    else{
        while(i<pos-2){
            temp=temp->next;
            i=i+1;
        }
        newnode=createnode();
        temp1=temp->next;
        temp->next=newnode;
        newnode->next=temp1;
    }
    return head;
}
node *insertnum(node *head){
    node *temp, *temp1, *newnode;
    int num;
    cout<<"enter the number after which you wish to add the new number:";
    cin>>num;
    temp=head;
    while(temp->data!=num){
        temp=temp->next;
    }
    newnode=createnode();
    temp1=temp->next;
    temp->next=newnode;
    newnode->next=temp1;
    return head;
}
node *insert(node *head){
    cout<<"press 1. to enter number by position."<<endl;
    cout<<"press 2. to add number after another number in the list."<<endl;
    cout<<"enter your option:";
    int dec;
    cin>>dec;
    if (dec==1){
        head=insertpos(head);
    }
    else if (dec==2){
        head=insertnum(head);
    }
    return head;
}
int main(){
    node *head=NULL, *newnode=NULL, *temp=NULL;
    int n;
    cout<<"enter the number of elements to enter in the list:";
    cin>>n;
    int i=0;
    for(i=0;i<n;i++){
        if (head==NULL){
            head=createnode();
            temp=head;
        }
        else{
            newnode=createnode();
            temp->next=newnode;
            temp=newnode;
        }
    }
    head=insert(head);
    display(head);

}
