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
node *dequeue(node* top){
    node *temp;
    if (top->next->next==NULL){
        cout<<"Warning! Only one element left in the queue"<<endl;
        cout<<"element dequeued is:"<<top->data<<endl;
        temp=top->next;
        free(top);
        top=temp;

    }
    else if (top->next!=NULL)
    {
        cout<<"element dequeued is:"<<top->data<<endl;
        temp=top->next;
        free(top);
        top=temp;
    }
    else if(top==NULL){
        cout<<"the queue is already empty"<<endl;
    }
    else{
        cout<<"element dequeued is:"<<top->data<<endl;
        top=NULL;
        cout<<"The queue is empty now"<<endl;
    }
    return top;
}
node *enqueue(node *tail){
    node *newnode;
    newnode=createnode();
    tail->next=newnode;
    tail=newnode;
    return tail;
}
node *addnum(node *tail){
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
        cout<<"The queue is empty"<<endl;
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
    int s=1;
    while(s){
        cout<<"enter 1. to enqueue()."<<endl;
        cout<<"enter 2. to dequeue()."<<endl;
        cout<<"enter 3. to enqueue more than one element."<<endl;
        cout<<"enter 4. to display stack."<<endl;
        cout<<"enter your option:";
        cin>>s;
        if (s==1){
            tail=enqueue(tail);
        }
        else if(s==2){
            top=dequeue(top);
        }
        else if(s==3){
            tail=addnum(tail);
        }
        else if(s==4){
            display(top);
        }
        else{
            break;
        }
    }
    
}
