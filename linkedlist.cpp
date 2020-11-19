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
int display(node *head){
    node *temp;
    temp=head;
    while (temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int insert(node *head){
    node *temp, *temp1, *newnode;
    int pos;
    cout<< "enter the position you want to insert a new number:";
    cin>>pos;
    temp=head;
    int i=0;
    while(i<pos-2){
        temp=temp->next;
        i=i+1;
    }
    newnode=createnode();
    temp1=temp->next;
    temp->next=newnode;
    newnode->next=temp1;


    
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
    insert(head);
    display(head);

}
