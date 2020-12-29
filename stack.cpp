#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node * next;
};
node *createnode(){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    int n;
    cout<<"enter the number you want to enter:";
    cin>>n;
    newnode->val=n;
    newnode->next=NULL;
    return newnode;
}
node *push(node *top,node *newnode){
    node *newnode;
    
}
node *addnum(int n){
    node *newnode;
    newnode=createnode();

}
void main(){
    int n;
    cout<<"enter the number of elements you want to push in the stack";
    cin>>n;
    addnum(n);
}