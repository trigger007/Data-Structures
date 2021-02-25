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
    def addnum(self,head):
        val=int(input("enter the number you want to add:"))
        newnode=self.createnode(val)
        temp=head
        while temp.next!=None:
            temp=temp.next
        temp.next=newnode
        self.display(head)
    def delpos(self,head,pos):
        temp=head
        i=0;
        for i in range(pos-1):
            temp=temp.next
        temp1=temp
        temp2=temp.next.next
        temp=temp.next
        del temp
        temp1.next=temp2

    def delval(self,head,val):
        temp=head
        temp1=temp
        if head.val==val:
            temp=head.next
            del head
            head=temp
        else:
            temp=head.next
            while temp.val!=val:
                temp=temp.next
                temp1=temp1.next
            temp2=temp.next
            temp1.next=temp2
            del temp
        return head
        
        # print("choose the part you want to delete")
        # print("1. for node by value")
        # print("2. for node by position")
        # a=int(input("enter your option:"))

    def display(self,head):
        temp=head
        print(temp.val,"->",end =" ")
        while temp.next!=None:
            temp=temp.next
            print(temp.val,"->",end =" ")
    
            
head=node(5)

n=int(input("enter number of elements to add:"))
for i in range(n):
    head.addnum(head)
f=int(input("enter the number to be deleted:"))
head=head.delval(head,f)
head.display(head)



        
