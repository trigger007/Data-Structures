class bst:
    def __init__(self):
        self.root=None

    def createnode(self,val):
        a=node(val)
        return a

    def insert(self,val):
        temp=self.root
        while temp!=None:
            if val>=temp.data:
                temp=temp.right
            elif val<temp.data:
                temp=temp.left
        newnode=self.createnode(val)
        temp=newnode
    
    def inorder(self,temp):
        if temp:
            self.inorder(temp.left)
            print(temp.data)
            self.inorder(temp.right)

    def preorder(self,temp):
        if temp:
            print(temp.data)
            self.inorder(temp.left)
            self.inorder(temp.right)

    def postorder(self,temp):
        if temp:
            self.inorder(temp.left)
            self.inorder(temp.right)
            print(temp.data)

    def display(self):
        temp=self.root
        n=int(input("enter \n 1. for inorder \n 2. for preorder \n 3.for postorder \n enter your option:"))
        if n==1:
            self.inorder(temp)
        elif n==2:
            self.preorder(temp)
        elif n==3:
            self.postorder(temp)
class node:
    def __init__(self,val):
        self.data=val
        self.right=None
        self.left=None
    

        

bst=bst()
bst.root=node(5)
n=int(input("enter no;"))
for i in range(n):
    val=int(input("enter:"))
    bst.insert(val)
bst.display()

    