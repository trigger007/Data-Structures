#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
};
node *createnode(){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    int num;
    cout<<"Enter the number to be added:";
    cin>>num;
    newnode->data=num;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
node *addelement(node *root){
    node *newnode;
    newnode=createnode();
    
}
int main(){
    node *root;
    root=createnode();

}