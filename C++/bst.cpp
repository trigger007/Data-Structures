#include<iostream>
#include<string>
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
void insertnum(node *root,node *newnode){
    node *temp;
    temp=root;
    if (newnode->data>=temp->data){
        if (root->right==NULL){
            root->right=newnode;
        }
        else {
            insertnum(root->right,newnode);
        }
    }
    else{
        if (root->left==NULL){
            root->left=newnode;
        }
        else{
            insertnum(root->left, newnode);
        }

    }
}
void inorder(node *root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node *root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if (root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}


void display(node *root){
    cout<<"enter the type of order you want to print:-"<<endl;
    cout<<"1. for Inorder"<<endl<<"2. for Preorder"<<endl<<"3. for Postorder"<<endl<<"Your option:";
    int n;
    cin>>n;
    if (n==1){
        inorder(root);
    }
    else if(n==2){
        preorder(root);
    }
    else if(n==3){
        postorder(root);
    }
}
node *addelement(node *root){
    node *newnode;
    int n;
    cout<<"enter the number of numbers you want to insert:";
    cin>>n;
    int i;
    for(i=0;i<n;i++){
        newnode=createnode();
        insertnum(root,newnode);
    }
    return root;
}

void findelement(node *root,int num,node *prev=NULL){
    node *temp, *temp1;
    temp=root;
    cout<<root->data<<endl;
    if (temp==NULL){
        cout<<"number not found"<<endl;
        return;
        
    }
    else{
        if (num==temp->data){
            cout<<"number found"<<endl<<"parent node:"<<prev->data<<endl;
            if (temp->left!=NULL){
                cout<<"left child is:"<<temp->left->data<<endl;
            }
            if (temp->right!=NULL){
                cout<<"right child is:"<<temp->right->data<<endl;
            }
        }
        else if(num<temp->data){
            prev=temp;
            findelement(temp->left,num,prev);
        }
        else if (num>=temp->data){
            prev=temp;
            findelement(temp->right,num,prev);
        }
    }
    
}

void innum(node *root){
    cout<<"enter the number you want to find:";
    int n,i;
    cin>>n;
    findelement(root,n);

}


int main(){
    node *root=NULL, *newnode, *temp;
    root=createnode();
    root=addelement(root);
    display(root);
    innum(root);
}