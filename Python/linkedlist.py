class linkedlist:
    def __init__(self):
        self.head=None
    def createnode(self,data):
        a=node(data)
        a.next=None
        return a
    def addnum(self):
        val=int(input("enter the number you want to add:"))
        newnode=self.createnode(val)
        temp=self.head
        while temp.next!=None:
            temp=temp.next
        temp.next=newnode
        #self.display(head)
    def addval(self):
        val=int(input("enter the number after which you want to insert the new number:"))
        v=int(input("enter the number you want to add:"))
        newnode=self.createnode(v)
        temp=self.head
        while temp.val!=val:
            temp=temp.next
        newnode.next=temp.next
        temp.next=newnode
    def delpos(self,pos):
        temp=self.head
        i=0;
        for i in range(pos-1):
            temp=temp.next
        temp1=temp
        temp2=temp.next.next
        temp=temp.next
        del temp
        temp1.next=temp2

    def delval(self,val):
        temp=self.head
        temp1=temp
        if self.head.val==val:
            temp=self.head.next
            del self.head
            self.head=temp
        else:
            temp=head.next
            while temp.val!=val:
                temp=temp.next
                temp1=temp1.next
            temp2=temp.next
            temp1.next=temp2
            del temp
        
        
        # print("choose the part you want to delete")
        # print("1. for node by value")
        # print("2. for node by position")
        # a=int(input("enter your option:"))

    def display(self):
        temp=self.head
        print(temp.val,"->",end =" ")
        while temp.next!=None:
            temp=temp.next
            if temp.next!=None:
                print(temp.val,"->",end =" ")
            else:
                print(temp.val,end =" ")
        print(" ")
class node:
    def __init__(self,data):
        self.val=data;
        self.next=None
    
    

ll=linkedlist()
head=node(5)
ll.head=head
n=int(input("enter number of elements to add:"))
for i in range(n):
    ll.addnum()
ll.addval()
f=int(input("enter the number to be deleted:"))
ll.delval(f)
ll.display()



        
