class linkedlist:
    def __init__(self):
        self.head=None
        self.cur=None
class node:
    def __init__(self,data):
        self.val=data;
        self.next=None
    def createnode(self,data):
        a=node(data)
        a.next=None
        return a
    def display(self,head):
        temp=head
        print(temp.val)
        while temp.next!=None:
            temp=temp.next
            print(temp.val)
            
head=node(5)
a=node(6)
b=node(7)
head.next=a
a.next=b
head.display(head)



        
