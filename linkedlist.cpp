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
    node *temp, *temp1;
    int pos;
    cout<< "enter the position you want to insert a new number:";
    cin>>pos;
    int i=0;
    
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
    display(head);

}
