class node:
    def __init__(self,val):
        self.data=val
        self.right=None
        self.left=None
class bst:
    def __init__(self):
        self.root=None

    def createnode(self,val):
        a=node(val)
        return a

    def insert(self,val):
        temp=self.root
        ch=0
        newnode=self.createnode(val)
        while ch!=1:
            if val>=temp.data:
                if temp.right==None:
                    temp.right=newnode
                    ch=1
                temp=temp.right
            elif val<temp.data:
                if temp.left==None:
                    temp.left=newnode
                    ch=1
                temp=temp.left

    def delete(self,val):
        temp=self.root
        tt=None
        str=""
        while temp.data!=val:
            print("chh:",temp.data)
            if temp.data<val:
                if temp.right!=None:
                    tt=temp
                    str="right"
                    temp=temp.right
                else:
                    print("element not found")
                    break
            elif temp.data>=val:
                if temp.left!=None:
                    tt=temp
                    str="left"
                    temp=temp.left
                else:
                    print("element not found")
                    break
        temp2=temp
        newnode=temp
        tt1=None
        print(tt.data,temp.data,str)
        if temp2.right==None and temp2.left==None:
            print("c1")
            del(temp2)
            if str=="right":
                tt.right=None
            else:
                tt.left=None
            print("element deleted")
        elif (temp2.right!=None and temp2.left==None) or (temp2.left!=None and temp2.right==None):
            print("c2")
            if temp2.right==None:
                if str=="right":
                    tt.right=temp2.left
                else:
                    tt.left=temp2.left
                del(temp2)
                print("element deleted")
            elif temp2.left==None:
                if str=="right":
                    tt.right=temp2.right
                else:
                    tt.left=temp2.right
                del(temp2)
                print("element deleted")
        elif temp2.right!=None and temp2.left!=None:
            print("c3")
            newnode=temp2.right
            if newnode.right==None:
                temp2.right==None
                newnode.left=temp2.left
                if str=="right":
                    tt.right=newnode
                else:
                    tt.left=newnode
                del(temp2)
            else:
                tt1=node(0)
                print(temp.data,newnode.data)
                while newnode.left!=None:
                    tt1=newnode
                    newnode=newnode.left
                
                if str=="right":
                    tt.right=newnode
                else:
                    tt.left=newnode
                
                newnode.right=temp2.right
                newnode.left=temp2.left
                tt1.left=None
                del(temp2)  
                print("element deleted") 

    def dele(self,val):
        print("//2nd attempt")
        temp=self.root
        temp1=temp
        while temp.data!=val:
            print("hh") 
            
        
    
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

    

        

bst=bst()
bst.root=node(4)
n=int(input("enter no;"))
for i in range(n):
    val=int(input("enter:"))
    bst.insert(val)
bst.display()
bst.delete(10)
bst.display()


    