class node:
    def __init__(self,val):
        self.data=val
        self.right=None
        self.left=None
class tree:
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
    def dfs(self,v):
        l=[]
        newnode=self.root
        l.append(newnode)
        while len(l)!=0:
            if newnode.left!=None:
                l.append(newnode.left)
            if newnode.right!=None:
                l.append(newnode.right)
            if v==newnode.data:
                print(v,"found")
                break
            else:
                print(newnode.data)
                newnode=l[-1]
                l.remove(l[-1])
                
t=tree()
t.root=node(5)
n=int(input())
for i in range(n):
    t.insert(int(input()))

t.dfs(1)
